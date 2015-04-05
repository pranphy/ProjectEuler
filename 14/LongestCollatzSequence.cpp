#include<bits/stdc++.h>

using namespace std;

long Next(long Current)
{
    if(Current&1) return (3*Current+1); else return Current/2.;
}

int main()
{
    int ChainLength = 0;
    long Producer  = 0;
    for(long j=1;j<1000000;j++)
    {
        long Number = j;
        long Length = 0;
        //cout<<" j NEtered "<<j<<"\t";
        while(Number != 1)
        {
            Number = Next(Number);
            //cout<<Number<< "  "; cin>> Producer;
            Length++;
        }
        //cout<<j<<" Got out with length "<<Length<<endl;
        if(Length>ChainLength)
        {
            Producer = j;
            ChainLength = Length;
        }
    }
    cout<<Producer<<endl;
    return 0;
}
