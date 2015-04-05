#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Count = 0, Dcount = 0;
    int Upto = 100;
    int Terms = Upto - 1;
    for( float j =2 ;j <=Upto;j++)
    {

        for(float k = 2; k<=Upto; k++ )
        {
            Count++;
            if(j-k)
            if(float(j/k) == (log10(j)/log10(k))){
                Dcount++;
                cout<<j<<"^"<<k<<" = "<<k<<" ^ "<<j<<endl;
            }
        }
    }
    cout<<Count-Dcount/2<<endl;
}
