/*
 * 	User: soulbreaker
 * 	Problem: COINS
 * 	Language: C
 */

#include<stdio.h>

long long int a[1000000]={0};

long long int coins(long long int N)
{
	if(N<1000000)
	{
		if(N<12)
		{
			if(a[N]==0)
			{
				a[N]=N;
			}
			return a[N];
		}
		else
		{
			if((N/2)+(N/3)+(N/4)<=N)
			{
				if(a[N]==0)
				{
					a[N]=N;
				}
				return a[N];
			}
			else
			{
				if(a[N]==0)
					a[N]=coins(N/2)+coins(N/3)+coins(N/4);
				return a[N];
			}
		}
	}
	else
	{
		if((N/2)+(N/3)+(N/4)<=N)
		{
			return N;
		}
		else
			return coins(N/2)+coins(N/3)+coins(N/4);
	}
}

int main()
{
	long long int N,b;
	while((scanf("%lld",&N))!=EOF)
	{
		b=coins(N);
		printf("%lld\n",b);
	}
	return 0;
}
