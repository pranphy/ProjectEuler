#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int t = 286;; t++) {
        long x = (t*(t+1))/2;
        float p = (sqrt(24*x+1)+1)/6.;
        float h = (sqrt(8*x+1)+1)/4.;
        if (int(p) == p and int(h) == h) {
            cout<<x<<endl;
            break;
        }
    }
}
