#include<bits/stdc++.h>

using namespace std;

int main() {
    double Max = 0;
    ifstream File("base_exp.txt");
    string One;
    int a = 0,b = 0;
    int Line = 1, MaxLine = 0;
    while(!File.eof()) {
        File>>One;
        //cout<<One<<"  ";
        auto It = find(One.begin(),One.end(),',');
        string First(One.begin(),It);
        string Second(It+1,One.end());
        //cout<<First<<" and  "<<Second<<endl;
        int Base = stoi(First);
        int Exp = stoi(Second);
        double Val = Exp*log(Base);
        if(Val > Max ) {
            Max = Val;
            a = Base;
            b = Exp;
            MaxLine = Line;
        }
        Line++;
    }
    cout<<a<<"^"<<b<<" gives the max in the line "<<MaxLine<<endl;
    File.close();
}

