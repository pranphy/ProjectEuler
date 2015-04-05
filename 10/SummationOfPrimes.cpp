#include<bits/stdc++.h>

// Correct answer 142913828922


using namespace std;
bool isPrime(unsigned long long);

int main() {
    unsigned long long Total = 2;
    unsigned long long Upto = 2000000;
    for(double j = 3 ; j < Upto;j += 2) {
        if(isPrime(j)) Total += j;
    }
    cout << Total;
}

bool isPrime(unsigned long long Number) {
    if(Number == 2 or Number == 3 or Number == 5) return true;
    if(!(Number & 1)) return false;
    if(!(Number % 3)) return false;
	for(unsigned long long j = 5 ;j <= sqrt(Number) + 1; j++)
		if(!(Number%j))
			return false;
	return true;
}
