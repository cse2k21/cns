#include<stdio.h>
#include<string.h>
void main()
{
char pt[10],out[2],result[10];
int key[2][2];
printf("enter plain text:");
scanf("%s",pt);
printf("enter key:");
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
	scanf("%d",&key[i][j]);
	}
}
for(int i=0;i<strlen(pt);i+=2)
{
	for(int j=0;j<2;j++)
	{
		for(int k=0;k<2;k++)
		{	out[0]=0;out[1]=0;
			for(int l=0,m=i;l<2,m<i+2;l++,m++)
			{
			out[j]+=key[j][l]*(pt[m]-65);
			}
			result[i]=(char)((out[0]%26)+65);
			result[i+1]=(char)((out[1]%26)+65);
		}
	}
	
}	
printf("cipher text :%s",result);
}
