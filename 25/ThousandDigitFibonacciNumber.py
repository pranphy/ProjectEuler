#!/usr/bin/python3
import math as mp


def digits(x):
    return (mp.log(x) / mp.log(10)) + 1

a = 1
b = 1
x = 1
p = 0
NOD = 1000
while(digits(a) < NOD):
    x = x + 1
    c = a + b
    a = b
    b = c

print('The first fibonacci number with ',NOD,'digits is',a,' and it is in ' + str(x) + 'th position')
