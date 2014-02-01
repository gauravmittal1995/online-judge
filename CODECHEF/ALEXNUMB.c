/*
 * 	User: soulbreaker
 * 	Problem: ALEXNUMB
 *	Language: C
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long int test,z,num,i,k,a;
	scanf("%lld",&test);
	for(z=0;z<test;z++)
	{
		scanf("%lld",&num);
		k=0;
		for(i=0;i<num;i++)
			scanf("%lld",&a);
		k=(num*(num-1))/2;
		printf("%lld\n",k);
	}
	return 0;
}
