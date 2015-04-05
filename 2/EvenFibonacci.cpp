#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a =1; int b =1,c=0;
   long Sum = 0;
   do
   {
        if(a&1) Sum+=a;
        c=a+b;a=b;b=c;
   }while(a<=4000000);
   cout<<Sum;
}
