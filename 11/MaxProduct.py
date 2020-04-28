#!/usr/bin/env python3

# vim: ai ts=4 sts=4 et sw=4 ft=python
import numpy as np

def read_matrix():
    with open('Matrix.txt','r') as ifl:
        mtx = np.empty(shape=(20,20))
        cnt = 0
        for line in ifl:
            row = line.split(' ')
            mtx[cnt]  = row
            cnt += 1
    return mtx

mtx= read_matrix()
max_hor = 0
for i in range(20):
    for j in range(17):
        prod = mtx[i][j+0]* mtx[i][j+1]*mtx[i][j+2]*mtx[i][j+3]
        #print('Last one is ',mtx[i][j+3])
        if prod > max_hor:
            max_hor = prod

print(max_hor)

max_ver = 0
for i in range(17):
    for j in range(20):
        prod = mtx[i+0][j]* mtx[i+1][j]*mtx[i+2][j]*mtx[i+3][j]
        if prod > max_ver:
            max_ver = prod

print(max_ver)
mx = max(max_hor,max_ver)

max_dia = 0
for i in range(17):
    for j in range(17):
        prod = mtx[i+0][j+0]* mtx[i+1][j+1]*mtx[i+2][j+2]*mtx[i+3][j+3]
        if prod > max_dia:
            max_dia = prod


print(max_dia)

mxx = max(max_dia,mx)

bmax_dia = 0
for i in range(17):
    for j in range(3,20):
        prod = mtx[i+0][j-0]* mtx[i+1][j-1]*mtx[i+2][j-2]*mtx[i+3][j-3]
        print(' Last one is ', mtx[i-3][j-3])
        if prod > bmax_dia:
            bmax_dia = prod

print(bmax_dia)
mu = max(mxx,bmax_dia)
print(mu)
