#include<bits/stdc++.h>

using namespace std;

string Divide(int,int,int = 7);
string toString(long);

int main() {
    cout<<(Divide(1,443,200))<<endl;
}

string Divide(int n,int d,int Precision) {
    string Val;
    int r;

    Val = Val+toString(n/d)+".";
    n = n%d;
    if (n<d)
        n*=10;
    int Counter = 0;
    do {
        Counter++;
        int q = n/d;
        r = n % d;
        if(r<d) {
            r*=10;
            //Val += '0';
        }
        n = r;
        Val += q+'0';
        if(Counter>Precision) return Val;
    } while(r);
    return Val;
}
string toString(long x) {
    string Result;
    if(!x) return string("0");
    while(x>0) {
        Result += (x%10)+'0';
        x /= 10;
    }
    reverse(Result.begin(),Result.end());
    return Result;
}
