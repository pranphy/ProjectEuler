#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int NumberOfDigits(double);
int GetDigit(double,int);

int main()
{
    double Counter=0,PlaceHolder=1;
    int Product=1,i=1;
    while(PlaceHolder<=1000000)
    {
       Counter+=NumberOfDigits(i);
       //cout<<i<<" NOD "<<NumberOfDigits(i)<<endl;
       if(Counter>=PlaceHolder)
       {
           Counter-=NumberOfDigits(i);
           int Difference=PlaceHolder-Counter;
           cout.precision(15);
           cout<<PlaceHolder<<" th  digit is "<<GetDigit(i,Difference-1)<<endl;
           i--;
           PlaceHolder*=10;
       }
       i++;

    }
    cout<<" Digits gone "<<Counter<<endl;
}


int NumberOfDigits(double Number)
{
    return static_cast<int>(log10(Number))+1;
}

int GetDigit(double Number,int Position)
{
    char Numr[100];
    sprintf(Numr,"%f",Number);
    char c=Numr[Position];
    return c-'0';
}
