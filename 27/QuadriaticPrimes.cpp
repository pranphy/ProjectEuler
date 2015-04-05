#include<bits/stdc++.h>

using namespace std;

bool isPrime(long Number)
{
    if(Number == 1) return false;
    if(!(Number&1)) return false;
    int Upto = sqrt(Number)+1;
    for(long p=2;p<Upto;p++)
        if(!(Number%p)) return false;
    return true;
}

int main()
{
    int Max = 0;
    int Count = 0;
    long Product = 1;
    int A,B;
    for( int a = 1000; a >= -1000; a--)
    {
        for( int b= 999; b>-1000; b--)
        {
            int Count = 0;
            for(int n=0;n<999;n++)
            {
                long Contender = pow(n,2)+a*n+b;
                if(Contender > 0 and isPrime(Contender)){
                    Count++;
                }
                else
                    break;
            }
            if(Count>Max){
                Product = a*b;
                A = a; B = b;
                Max = Count;
            }
        }
    }
    cout<<Product<<endl;
    cout<<"n^2+"<<A<<"n+"<<B<<" with "<<Max<<" Primes "<<endl;
}
