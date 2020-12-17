#!/usr/bin/python3

def Tri(n):
    p = int(n*(n+1)/2.);
    return p
	
def main():
    Starter = 20;
    Value  = 0;
    NOD = 200; #//Number of divisiors required
    while(True):
        Current = Tri(Starter)
        #print('Current tri is ',Current)
        Count = 0
        for p in range(1,Current+1):
            if Current % p == 0:
                Count += 1
                if(Count>NOD):
                    print(Starter, "th triangle number ",Current)
                    return 0;

        Starter += 1;

y = main()
