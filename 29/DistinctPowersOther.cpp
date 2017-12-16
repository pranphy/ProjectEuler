#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Upto = 100;
    int Terms = Upto-1;
    int Count = 0;
    vector<float> Array;
    for(float a = 2; a <= Upto; a++)
    {
        for(float b = 2; b <= Upto; b++)
        {
            if(find(Array.begin(),Array.end(),b*log(a))==Array.end())
            {
                Count++;
                Array.push_back(float(b*log(a)));
            }
        }
    }
    //sort(Array.begin(),Array.end());
    //for( float j: Array)
    //    cout<<exp(j)<<endl;
    cout<<Count<<endl;
}
