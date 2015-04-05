#include<bits/stdc++.h>

using namespace std;


bool isPrime(long Number)
{
    if(!(Number&1)) return false;
    int Upto = sqrt(Number)+1;
    for(long p=2;p<Upto;p++)
        if(!(Number%p)) return false;
    return true;
}

int main()
{
    for( int i = 0; i< 1100;i++)
    {
        int Number = i*i -999*i+61;
        cout<<Number<<" "<<isPrime(Number)<<"\t";
    }
}
