#include<bits/stdc++.h>

using namespace std;

long Next(long Current)
{
    if(Current&1) return (3*Current+1); else return Current/2.;
}

int main()
{
    int i;
    cin>>i;
    int Count = 1;
    long Number = i;
    while(Number!= 1)
    {
        cout<<Number<<endl;
        Number = Next(Number);
        Count++;
    }
    cout<<Count<< " terms "<<endl;
}
