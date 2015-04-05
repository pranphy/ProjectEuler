#!/usr/bin/python3

import math as mp

def Reverse(x):
	return x[::-1]
	
def isPalindrome(x):
	return Reverse(x) == x

def isLychrel(x):
	Iterations = 0
	CurrentNumber = x
	while Iterations < 50 :
		Iterations += 1
		String = str(CurrentNumber)
		Rev = Reverse(String)
		CurrentNumber = int(String)+int(Rev)
		if isPalindrome(str(CurrentNumber)):
			return False
	return True
	

Count = 0
for x in range(1,10000):
	if isLychrel(x):
		#print(x," is Lychrel ")
		Count += 1
	
print(" There are ",Count, "Lycherals ")


