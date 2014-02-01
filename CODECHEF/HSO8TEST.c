/*
 * 	User: soulbreaker
 * 	Problem: HSO8TEST
 * 	Language: C
 */

#include<stdio.h>

int main()
{
	float a;
	float b;
	scanf("%f %f",&a,&b);
	if((int)a%5==0)
	{
		if(a<=b-0.5)
		{
			b=b-a-0.5;
		}
	}
	printf("%.2f\n",b);
	return 0;
}
