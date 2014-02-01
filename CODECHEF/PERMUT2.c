/*
 * 	User : soulbreaker
 * 	Problem : PERMUT2
 * 	Language : C
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,flag,i,l;
	while(1)
	{
		scanf("%d",&n);
		flag=0;
		if(n==0)
			return 0;
		int *a=malloc(sizeof(int)*n);
		int *b=malloc(sizeof(int)*n);
		l=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]-1]=l;
			l++;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");
		free(a);
		free(b);
	}
}
