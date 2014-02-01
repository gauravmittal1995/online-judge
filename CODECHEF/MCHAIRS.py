#	User: soulbreaker
#	Problem: MCHAIRS
#	Language: Python

def power(N):
	if(N==1):
		return 2
	else:
		x=power(N/2)
		if(N%2==1):
			return (((2%1000000007)*(x%1000000007)*(x%1000000007))%1000000007)
		else:
			return ((x%1000000007)*(x%1000000007))%1000000007

test=input()
while(test>0):
	N=input()
	sum=power(N)-1
	sum=sum%1000000007
	print sum
	test=test-1
