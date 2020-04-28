import matplotlib.pyplot as plt
import numpy as np

a = [9,8,7,18,26,27,22,25,28,36,28,18,35,36,18]
powe = [2,3,4,3,3,3,4,4,4,4,5,6,5,5,7]

for i in range(len(a)):
    print(i,' .',a[i]**powe[i])

plt.plot(np.log(a),'-o')
plt.yscale('log')
plt.show()


def sum_digit(num):
    numbr = '{}'.format(num)
    Sum = 0;
    for c in numbr:
        Sum += ord(c)-ord('0')

    return Sum


def is_psm(num):
    smdig = sum_digit(num)
    if smdig == 1:
        return False
    lgp = int(float(np.log(num))/float(np.log(smdig)))
    if smdig**lgp == num:
        return True
    else:
        return False

def main():
    cnt = 0
    num = 80
    Psm = [];
    while cnt<30:
        if is_psm(num):
            Psm.append(num)
            cnt +=1
            print(cnt,' .',num)
        num +=1
            

#main()
