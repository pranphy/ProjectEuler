#!/usr/bin/python3

a = 0
for p in range(1,1001):
	a = a + p**p;
num = str(a)
print('Last ten digits are  ',num[-10::1])
