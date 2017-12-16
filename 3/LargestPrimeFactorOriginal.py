#!/usr/bin/python3

import math as mp

def isPrime(y):
	if y == 1:
		return False
	x = int(mp.sqrt(y))+1
	while x > 1:
		if y % x == 0:
			return False
			break
		x -= 1
		
	return True	
	
def Find(Number):
	for x in range(2,Number):
		#print(x)
		if Number % x == 0:
			Quotient = Number / x
			if isPrime(Quotient):
				print(Quotient)
				break;


def FirstToDivide(x):
	Increment = 1
	if x & 1:
		Increment = 2
	
	a = 1 + Increment 
	while(x % a != 0):
		a += Increment
	return a
	
def Divisors(x):
	L = []
	while 1:
		c = FirstToDivide(x)
		#print(c,' is first to divide')
		L.append(c)
		x = int(x / c)
		if x == 1:
			return L

def LargestPrime(x):
	if(isPrime(x)):
		return x
	else:
		a = 2
		while (x % a != 0):
			a += 1
		print(x,' is not a prime but is divided by ',a)
		return LargestPrime(x/a)

Number = 600851475143
L = Divisors(Number)
L.sort()
Last = L[-1]
print(Last,' is the largest and it had ',len(L),' divisors ')
