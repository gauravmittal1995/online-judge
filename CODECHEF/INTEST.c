/*
 * 	User: soulbreaker
 * 	Problem: INTEST
 * 	Language: C
 */

#include<stdio.h>
int main()
{
	int n,k,point,t,z;
	scanf("%d %d",&n,&k);
	point =0;
	for(z=0;z<n;++z)
	{
		scanf("%d",&t);
		if(t%k==0)
		{
			point++;
		}
	}
	printf("%d\n",point);
	return 0;
}
