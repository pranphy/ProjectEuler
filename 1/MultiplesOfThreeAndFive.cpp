#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 1000, Sum = 0;
    for(int i =3;i<n;i++)
        if(i%3==0 or i%5 ==0) Sum+=i;
    cout<<Sum;
}
