#include<stdio.h>
#include<math.h>
void main()
{
int q,a,xa,xb,ya,yb,ka,kb;
printf("enter values of a,q,xa,xb: ");
scanf("%d%d%d%d",&q,&a,&xa,&xb);
ya=pow(a,xa);
ya=ya%q;
yb=pow(a,xb);
yb=yb%q;
ka=pow(yb,xa);
ka=ka%q;
kb=pow(ya,xb);
kb=kb%q;
if(ka==kb)
printf("same");
else
printf("different");
}

