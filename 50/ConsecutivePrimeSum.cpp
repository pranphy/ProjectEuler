#include<bits/stdc++.h>

using namespace std;

vector<long> Primes;

bool isPrime(int Number) {
    if(Number == 1) return false;
    if(Number==2) return true;
    if(!(Number&1)) return false;
    int Upto = sqrt(Number);
    for(int j=2; j<=Upto; j++)
        if((Number%j )==0)
            return false;
    return true;
}

long Sum(long a, long b) {
    return a+b;
}

void GeneratePrimes(long x) {

    for(long j = 1; j<=x ; j++)
        if(isPrime(j)) Primes.push_back(j);

}
void Print(int x) {
    cout<<x<<endl;
}
int main() {
    long Highest = 1000000;
    cout<<isPrime(77)<<" is this a prime "<<endl;
    GeneratePrimes(Highest);
    int Max = 0, From = 0, To = 0;
    long Prime = 0;
    int Total = Primes.size();
    long t = 0;
    for(long i = 0; i<Total; i++) {
        long Current = Primes[t++];
        for(int j = i+1 ; j<Total; j++) {
            long Sum = accumulate(Primes.begin()+i, Primes.begin()+j+1,0);
           
            long Terms = j-i+1;
            if((Sum < Highest) && isPrime(Sum) && (Terms > Max) ) {
                Max = Terms;
                Prime = Sum;
                From = i;
                To = j;
            }
             //if(Sum > Current) j = Total;
        }
//pas:
    }
    cout<<Prime<<" can be written as sum of "<<Max<<" consecutive primes "<<endl;
    cout<<" They are "<<endl;
    for( int t = From ; t<=To; t++)
        cout<<Primes[t]<<" ";


}
