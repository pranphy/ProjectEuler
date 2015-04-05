#include<bits/stdc++.h>

using namespace std;
long Fact(int);
long digitFactorialSum(long);

int main()
{
    long Total = 0;
    for(long j=10;j<99999;j++)
        if(j==digitFactorialSum(j)){
            cout<<j<<endl;
            Total+=j;
        }
    cout<<" The sum of all these is "<<Total;
}

long Fact(int Number)
{
    if (Number == 0) return 1;
    if(Number<=1)
        return 1;
    else
        return Number*Fact(Number-1);
}

long digitFactorialSum(long Number)
{
    long Total = 0;
    
    while(Number>0)
    {
        //cout<<"Current digit "<<Number%10<<" ";
        Total+=Fact(Number%10);
        Number/=10;
    }
    return Total;
}
