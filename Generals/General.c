#include<bits/stdc++.h>
using namespace std;


bool isPrime(unsigned long long Number)
{
    if(Number == 2 or Number == 3 or Number == 5) return true;
    if(!(Number&1)) return false;
    if(!(Number%3)) return false;
	for(unsigned long long j = 5 ;j <= sqrt(Number) + 1; j++)
		if(!(Number%j))
			return false;
	return true;
}

int main(){
	int a;
	cin>>a;
	if(isPrime(a))
		cout<<a<<" is prime "<<endl;
	else
		cout<<a<<" is not prime "<<endl;
}
