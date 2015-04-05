#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int);

int main()
{
    int Counter = 0;
    int PrimeNumber = 10001;
    long Number=1;
    for(;;){
        Number++;
        if(isPrime(Number)){
            Counter++;
            if(Counter == PrimeNumber){
                cout<<Number<<endl;
                return 0;
            }
        }
    }
}


bool isPrime(int Number)
{
    if(Number==2) return true;
    if(!(Number&1)) return false;
    int Upto = sqrt(Number);
    for(int j=2;j<=Upto;j++)
        if((Number%j )==0)
            return false;
    return true;
}
