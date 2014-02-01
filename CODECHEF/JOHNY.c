/*
 * 	User: soulbreaker
 * 	Problem: JOHNY
 * 	Language: C
 */

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
	return (*(int*)a)-(*(int*)b);
}

int main()
{
	int T,i,N,j,K,temp,min,max,mid;
	scanf("%d",&T);
	for(i=0;i<T;++i)
	{
		scanf("%d",&N);
		int *a=malloc(sizeof(int)*N);
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[j]);
		}
		scanf("%d",&K);
		temp=a[K-1];
		qsort(a,N,sizeof(int),compare);
		min=0;
		max=N;
		while(min<=max)
		{
			mid=(min+max)/2;
			if(a[mid]==temp)
			{	
				printf("%d\n",mid+1);
				break;
			}
			else
				if(a[mid]>temp)
					max=mid-1;
				else
					min=mid+1;
		}
		free(a);
	}
	return 0;
}
