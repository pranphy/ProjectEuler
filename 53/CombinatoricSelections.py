#!/usr/bin/python3

import math as mp

def fact(x):
	if(x < 2):
		return 1
	else:
		return x*fact(x-1)

def Combn(n,r):
	return fact(n)/(fact(r)*fact(n-r))

Count = 0

for n in range(22,101):
	for r in range(0,n):
		if(Combn(n,r) > 1000000):
			Count += 1
			
print("There are ",Count, " of them ")

