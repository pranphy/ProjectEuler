#include<bits/stdc++.h>

using namespace std;
typedef long Type;


vector<Type> PrimeFactors(Type x) {
    Type Largest = 1;
    Type Org = x;
    vector<Type> Factors;
    for(;;) {
        Type c = 2;
        if(x == 1) {
            //Factors.push_back(c);
            return Factors;
        }
        while(x % c != 0)
            c++;
        //cout<<"Here "<<c<<" Divides "<<Org<<endl;
        if(find(Factors.begin(),Factors.end(),c) == Factors.end()) Factors.push_back(c);
        x /= c;
    }
}

int main() {
    int a = 4;
    int Count = 0;
    for(int j = 1000;;j++) {
        vector<Type> PFactors = PrimeFactors(j);
        if(PFactors.size() == a) {
            Count++;
            if(Count == a) {
                cout<<j-a+1<<" is the answer "<<endl;
                return 0;
            }
        } else {
            Count = 0;
        }
    }
}
