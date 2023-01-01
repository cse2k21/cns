#include<stdio.h>
#include<ctype.h>

void main()
{
char input[30];
int key;
printf("enter plain text:");
scanf("%s",input);
printf("enter the key:");
scanf("%d",&key);
for(int i=0;input[i]!='\0';i++)
{
	if(isupper(input[i]))
	{
	input[i]=(input[i]+key-65)%26+65;
	}
	else
	{
	input[i]=(input[i]+key-97)%26+97;
	}
}
printf("cipher text is:%s",input);
}

