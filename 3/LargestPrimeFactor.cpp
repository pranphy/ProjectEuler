#include<bits/stdc++.h>
using namespace std;
typedef long long  Type;
int main() {
    //Type Input = 600851475143;
    Type Input = 195547235365491;
    Type x = Input;
    Type Largest = 1;
    for(;;) {
        if(x == 1) {
            cout<<Largest<<" is the largest prime factor of "<<Input<<endl;
            exit(0);
        }
        Type c = 2;
        while(x % c != 0)
            c++;
        if(c > Largest) Largest = c;
        x /= c;
    }
}
