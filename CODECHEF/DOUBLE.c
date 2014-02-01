/*
 * 	User: soulbreaker
 * 	Problem: DOUBLE
 * 	Language: C
 */

#include<stdio.h>
int main()
{
	int t,z;
	long long int n;
	scanf("%d",&t);
	for(z=0;z<t;z++)
	{
		scanf("%lld",&n);
		if(n%2==0)
			printf("%lld\n",n);
		else
			printf("%lld\n",n-1);
	}
	return 0;
}
