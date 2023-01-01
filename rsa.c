#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b){
if(a==0)
return b;
else if(b==0)
return a;
else if(a==b)
return a;
else if (a>b)
return gcd(a-b,b);
else
return gcd(a,b-a);
}

int modfun(int a, int n, int b)
{
    if(b==1)
            return a%n;
    return ((a%n)*modfun(a,n,b-1))%n;
}

int totient(int n)
{
int count=0;
for(int i=1;i<=n;i++)
{
if(gcd(n,i)==1)
{
count++;
}
}
return count;
}

void main()
{
    int a,b,n,phi,e,d,m;
    printf("Enter any two prime numbers: ");
    scanf("%d %d",&a,&b);
    n=a*b;
    phi=totient(n);
    printf("Value of phin: %d\n",phi);
    for(e=5;e<=100;e++){
        if(gcd(phi,e)==1)
            break;
    }
    for(d=e+1;d<=100;d++){
        if((d*e)%phi==1)
            break;
    }
    printf("Value of e: %d \nValue of d: %d \n",e,d);
    printf("\nEnter some numerical data: ");
    int data;
    scanf("%d",&data);
    int cipher=modfun(data,n,e);
    printf("\nThe Cipher text = %d \n",cipher);
    int decrypt=modfun(cipher,n,d);
    printf("The Decrypted text = %d \n",decrypt);
}
