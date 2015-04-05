#include<bits/stdc++.h>
using namespace std;
unsigned long long Tri(int n){ return n*(n+1)/2.;}
int main()
{
    int Starter = 20;
    unsigned long long Value  = 0;
    int NOD = 150; //Number of divisiors required
    for(;;)
    {
        unsigned long long Current = Tri(Starter);
        int Count = 0;
        for(unsigned long long p=Current; p>0; p--)
        {
            if(Current%p == 0) Count++;
            if(Count>NOD){
                cout<<Starter<<"th triangle number "<<Current<<endl;
                return 0;
            }
        }
        Starter++;
    }
}
