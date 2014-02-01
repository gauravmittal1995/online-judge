#	User: soulbreaker
#	Question : FCLTR2
#	Language : Python

def factorial(x):
	if(x==1):
		return x
	else:
		return x*factorial(x-1)
test=input()
for i in range(test):
	x=input()
	a=factorial(x)
	print a
