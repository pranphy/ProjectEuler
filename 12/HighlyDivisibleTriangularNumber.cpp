#include<bits/stdc++.h>
using namespace std;
unsigned long long Tri(int n){ return (n*(n+1))>>1;}
int main()
{
    int Starter = 200;
    unsigned long long Value  = 0;
    int NOD = 500; //Number of divisiors required
    for(;;)
    {
        unsigned long long Current = Tri(Starter);
        int Count = 0;
        for(unsigned long long p=1; p<=Current; ++p)
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
