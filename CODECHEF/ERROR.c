/*
 * 	User: soulbreaker
 * 	Problem: ERROR
 * 	Language: C
 */

#include<stdio.h>
int main()
{
	int t,i,flag,num;
	char a,s;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		flag=0;
		scanf("%c",&a);
		if(a=='\n')
		{
			scanf("%c",&a);
		}
		num=1;
		s=a;
		while(s!='\n')
		{
			scanf("%c",&a);
			if((s=='1')&&(a=='0'))
				num++;
			else
				if((s=='1')&&(a=='1'))
					num=1;
				else
					if((s=='0')&&(a=='1'))
						num++;
					else
						if((s=='0')&&(a=='0'))
							num=1;
			if(num==3)
			{
				flag=1;
			}
			s=a;
		}
		if(flag==1)
			printf("Good\n");
		else
			printf("Bad\n");
	}
	return 0;
}
