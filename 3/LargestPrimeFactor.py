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

def FirstToDivide(x):
	Increment = 1
	if x & 1:
		Increment = 2	# no odd number will be divided by even
	a = 1 + Increment 
	while(x % a != 0):
		a += Increment
	#print(a,' Divides ',x)
	return a
	
def Divisors(x):
	L = []
	while 1:
		c = FirstToDivide(x)
		L.append(c)
		x = int(x / c)
		if x == 1:
			return L


Number = 600851475143
Number = 2*17*19*31*15*73*97*149*6857*5897
#Number = eval(input('Enter a number :- '))
L = Divisors(Number)

print('The fact that 23381233 is prime is ',isPrime(23381233))

Last = L[-1]
print(Last,' is the largest prime factor of  ',Number,' and it has ',len(L),' prime factors ')

