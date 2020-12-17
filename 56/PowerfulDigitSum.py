#!/usr/bin/python3

import math as mp

def SOD(x):
	c = str(x)
	Sum = 0
	for Digit in c:
		Sum += int(Digit)
	
	return Sum
	
	
Largest = 0
for a in range(1,100):
	for b in range(1,100):
		CurrentSOD = SOD(a**b)
		if CurrentSOD > Largest:
			Largest = CurrentSOD

print(' the largest sum is ',Largest)

