#	User: soulbreaker
#	Problem : HOLES
#	Language : Python

test=input()
for i in range(test):
	count=0
	text=raw_input()
	for j in range(len(text)):
		if((text[j]=="A")or(text[j]=="D")or(text[j]=="O")or(text[j]=="P")or(text[j]=="R")or(text[j]=="Q")):
			count=count+1
		elif((text[j]=="B")):
			count=count+2
		else:
			pass
	print count
