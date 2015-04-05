#include<bits/stdc++.h>
using namespace std;
string toString(long);
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

string toString(long number) {
    string New;
    if(!number) New=string("0");
    while(number>0) {
        New += (number%10)+'0';
        number/=10;
    }
    reverse(New.begin(),New.end());
    return New;
}

vector<int> GeneratePrime(int a,int b) {
    vector<int> Primes;
    if(a % 2 == 0) a++;
    for(int i = a; i<= b; i+=2)
        if(isPrime(i)) Primes.push_back(i);
    return Primes;
}

bool isUnique(string s) {
    for(int i=0; i<s.length()-1; i++)
        for(int j = i+1; j<s.length(); j++)
            if(s[j]==s[i]) return false;
    return true;
}


int main() {
    vector<int> Primes = GeneratePrime(1484,9999);
	int dummy;
    for(int i = 0; i<Primes.size(); i++) {
        string Current = toString(Primes[i]);
		if(isUnique(Current)){
        	string Sorted = Current;
        	sort(Sorted.begin(),Sorted.end());
        	int Count = 1;
        	vector<int> Permutaions;
			Permutaions.push_back(Primes[i]);
        	for(int j = i+1; j<Primes.size(); j++) {
            	string Here = toString(Primes[j]);
            	string HereSorted = Here;
            	sort(HereSorted.begin(),HereSorted.end());
            	if(HereSorted == Sorted) {
                	Permutaions.push_back(Primes[j]);
                	Count++;
                	if(Count == 6) {
						int d1 = Permutaions[1] - Permutaions[0];
						int d2 = Permutaions[2] - Permutaions[1];
						cout<<" Permutaions are ";
                    	for(auto p:Permutaions)
                       		 cout<<p<<" ";
						cout<<d1<<" is d1 and d2 is "<<d2<<endl;
                   		cout<<endl; 
                	}
				}
            }
        }
    }
}
