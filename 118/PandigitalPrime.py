#!/usr/bin/env python3

# vim: ai ts=4 sts=4 et sw=4 ft=python
import itertools
import numpy as np

def is_prime(sit):
    num = int(''.join([str(_) for _ in sit]))
    for i in range(2,int(np.sqrt(num))):
        if num in [2,3,5,7,9,11,13]:
            return True 
        elif num % i == 0:
            return False 
    return  True

def find_it(self):
    for cob in  itertools.combinations([_+1 for _ in range(9)]):
        pass



if __name__ == '__main__':
    for i in range(100):
        s = [int(_) for _ in '{}'.format(i)]
        print('{} is frime {}'.format(i,is_prime(s)))
