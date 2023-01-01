#include<stdio.h>
#include<math.h>
int findGCD(int n1,int n2) 
{
	int i,gcd;
	for(i=1;i<=n1 && i<=n2; i++) 
	{
		if(n1%i==0 && n2%i==0)
			gcd=i;
	}
	return gcd;
}
void main()
{
	int z,m1,q,i,xa,k=1,p,c1=1,a,k1=1,c2,m,ma;
	int f;
	long long int ya=1,s1,s2,v1,v2;
	printf("Enter prime number q : ");
	scanf("%d",&q);
	printf("Enter primitive root of q : ");
	scanf("%d",&a);
	printf("Enter A's private key : ");
	scanf("%d",&xa);
	for(i=0;i<xa;i++) {
		ya=pow(a,xa);
	ya=ya%q;
	}
	printf("\nA's public key is {%d,%d,%lld}",q,a,ya);
	printf("\n\nEnter any random number : ");
	scanf("%d",&p);
	for(k=2;k<q;k++)
		if(findGCD(k,q-1)==1)
			break;
	printf("\nKey is: %d",k);
	s1=pow(a,k);
	s1=s1%q;
	for(f=1;f<=100;f++)
		if((k*f)%(q-1)==1)
  			break;
	printf("\nInverse of k is %d ",f);
	printf("\n\nEnter M Value: ");
	scanf("%d",&ma);
	s2=f*(ma-(xa*s1));
	s2=s2%(q-1);
	if(s2<0)
		s2=s2+(q-1);
	printf("\nDigital Signature: (%lld,%lld)",s1,s2);
	v1=pow(a,ma);
	v1=v1%q;
	v2=pow(ya,s1)*pow(s1,s2);
	v2=v2%q;
	printf("\nv1=%lld v2=%lld",v1,v2);
	if(v1==v2)
		printf("\nSignature is valid\n");
	else
		printf("\nSignature is not valid\n");
}
