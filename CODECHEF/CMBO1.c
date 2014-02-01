/*
 * 	User: soulbreaker
 * 	Problem: CMB01
 * 	Language: C
 */

#include<stdio.h>
#include<math.h>

int k=0;
long long int sum1=0;

long long int reverse(long long int a)
{
	int b;
	//long long int sum1;
	if(a==0)
	{
		return 0;
	}
	else
	{
		reverse(a/10);
		b=a%10;
		sum1+=b*pow(10,k);
		k++;
		return sum1;
	}
}


int main()
{
	int n,z;
	long long int a,b,sum;
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		scanf("%lld %lld",&a,&b);
		k=0;
		sum1=0;
		a=reverse(a);
		k=0;
		sum1=0;
		b=reverse(b);
		// printf("a= %lld b= %lld\n",a,b);
		sum=a+b;
		k=0;
		sum1=0;
		sum=reverse(sum);
		printf("%lld\n",sum);
	}
	return 0;
}
