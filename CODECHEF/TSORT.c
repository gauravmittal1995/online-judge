/*
 * 	User : soulbreaker
 * 	Problem : TSORT
 * 	Language : C
 */

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int main()
{
	int test,i;
	scanf("%d",&test);
	int *a=malloc(sizeof(int)*test);
	for(i=0;i<test;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,test,sizeof(int),compare);
	for(i=0;i<test;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	free(a);
}
