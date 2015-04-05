#include<bits/stdc++.h>

using namespace std;
vector<int> Position(3);

ifstream Keylog("./Passcode.txt");

void Read() {
    string Current;
    Keylog>>Current;
    int i = 0;
    for(auto ch: Current)
        Position[i++] = ch-'0';
}


int Pos(int a) {
    //return a;
    for(int i =0; i<3; i++)
        if(a == Position[i]) 
            return i;
    return -1;
}

bool Grt(int a,int b) {
    int Pa = Pos(a);
    int Pb = Pos(b);
    if(Pa<0 or Pb<0) return false;
    return Pos(a)<Pos(b);
}

int main() {
    Position.reserve(3);
    vector<int> Array = {7,8,6,2,3,0,9,1};
    //sort(Array.begin(),Array.end());
    int Cnt = 0;
    while(!Keylog.eof()) {
        Read();
		cout<<" Current position is "; for(auto k:Position) cout<<k<<" ";
        sort(Array.begin(),Array.end(),Grt);
		for(auto p: Array)
        	cout<<p;
		cout<<endl;

    }
    for(auto p: Array)
        cout<<p;
}
