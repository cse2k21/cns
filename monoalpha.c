#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
char input[26];
char pt[26];
printf("enter key:");
for(int i=0;i<26;i++)
{
scanf("%c",&input[i]);

	for(int j=0;j<i;j++)
	{	
	if(input[j]==input[i])
	{
	printf("error:already entered the key");
	exit(0);
	}
	}
}
printf("enter plain text:");
scanf("%s",pt);
char out[26];
for(int i=0;i<strlen(pt);i++)
{
	if(isupper(pt[i]))
	out[i]=input[pt[i]-65];
	else
	out[i]=input[pt[i]-97];
}
printf("cipher text is: %s",out);
}

