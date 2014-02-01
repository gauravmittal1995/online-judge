/*
 * 	User: soulbreaker
 * 	Problem: UVHST
 * 	Language: C
 */

#include<stdio.h>
int main()
{
	int test,z,a,b;
	scanf("%d",&test);
	for(z=0;z<test;z++)
	{
		scanf("%d %d",&a,&b);
		if((a%b)==0)
			printf("%d\n",(a/b)-1);
		else
			printf("%d\n",a/b);
	}
	return 0;
}
