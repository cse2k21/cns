#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int q,r,a,xa,xb,ya,yb,K;
printf("enter values of q,a,r,xa,xb: ");
scanf("%d%d%d%d%d",&q,&a,&r,&xa,&xb);
if(1<xa<(q-1) || 1<xb<(q-1) || 1<r<(q-1) )
{
ya=pow(a,xa);
ya=ya%q;
yb=pow(a,xb);
yb=yb%q;
K=pow(yb,r);
K=K%q;
int c1,c2,M;
printf("enter plain text: ");
scanf("%d",&M);
c1=pow(a,r);
c1=c1%q;
c2=(K*M)%q;
printf("encrypted message is %d,%d\n",c1,c2);
int k1,m1;
k1=pow(c1,xb);
k1=k1 % q;
int ki=1;
while(1)
{
if((ki*k1)%q == 1)
break;
ki++;
}
m1=c2*ki;
m1=m1%q;
printf("decrypted message is %d\n",m1);
}
else{
printf("invalid xa or xb or r values\n");
}
}
