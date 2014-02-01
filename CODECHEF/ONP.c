/*
 * 	User : soulbreaker
 * 	Problem : ONP
 * 	Language : C
 */

#include<stdio.h>
#include<string.h>
int main()
{
	int test,z,point,m,i;
	char a[400],ch[400];
	scanf("%d",&test);
	for(z=0;z<test;z++)
	{
		point=0;
		scanf("%s",ch);
		m=strlen(ch);
		for(i=0;i<m;i++)
		{
			if(ch[i]=='(');
			else
				if(ch[i]==')')
					printf("%c",a[--point]);
				else
					if((ch[i]>='a')&&(ch[i]<='z'))
						printf("%c",ch[i]);
					else
						a[point++]=ch[i];
		}
		printf("\n");
	}
	return 0;
}
