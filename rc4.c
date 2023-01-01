#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int k[4],p[4],s[8],t[8];
int i,j,k1,t1;
int temp=0;
printf("enter k:\n");
for(i=0;i<4;i++)
scanf("%d",&k[i]);
printf("enter p:\n");
for(i=0;i<4;i++)
scanf("%d",&p[i]);
for(i=0;i<8;i++)
s[i]=i;
for(i=0;i<8;i++)
{
if(i<4)
t[i]=k[i];
else
t[i]=k[i-4];
}
j=0;
for(i=0;i<=7;i++)
{
j=(j+s[i]+t[i])%8;
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
printf("after ksa state vector is:\n");
for(i=0;i<8;i++)
printf("%d",s[i]);
printf("\nafter prga cipher text is:\n");
i=0;
j=0;
while(i<4)
{
i=(i+1)%8;
j=(j+s[i])%8;
temp=s[i];
s[i]=s[j];
s[j]=temp;
t1=(s[i]+s[j])%8;
k1=s[t1];
k1=k1^p[i-1];
printf("%d",k1);
}
return 0;
}
