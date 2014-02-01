/*
 * 	User: soulbreaker
 * 	Problem: TLG
 * 	Language: C
 */

#include<stdio.h>
int main()
{
	int i,n,winner,lead,templead,a,b,p1,p2;
	scanf("%d",&n);
	lead=-1;
	if(n==0)
	{
		return 0;
	}
	else
	{
		p1=0;
		p2=0;
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&a,&b);
			p1+=a;
			p2+=b;
			if(a>b)
			{
				templead=p1-p2;
				if(templead>lead)
				{
					lead=templead;
					winner=1;
				}
			}
			else
			{
				templead=p2-p1;
				if(templead>lead)
				{
					lead=templead;
					winner=2;
				}
			}
		}
	}
	printf("%d %d",winner,lead);
	return 0;
}
