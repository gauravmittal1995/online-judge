/*
 * 	User : soulbreaker
 * 	Problem : COOLING
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
	int t,z,n,i,l,total,m;
	scanf("%d",&t);
	for(z=0;z<t;z++){
		scanf("%d",&n);
		int *a=malloc(sizeof(int)*n);
		int *b=malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),compare);
		qsort(b,n,sizeof(int),compare);
		l=0; m=0;
		for(i=0;i<n-m;i++)
			if(a[i]>b[i+m])
			{
				m++;
				i=i-1;
			}
			else
				l++;
		total=l;
		printf("%d\n",total);
		free(a);
		free(b);
	}
	return 0;
}
