#include<bits/stdc++.h>

#define Digits(x) static_cast<int>(log10(x))+1
using namespace std;

long SumToThePower(long,int);

int main()
{
    long Number = 2,
    Power = 5;
    long Last  = Number;
    cout<<"Enter to the power "; cin>>Power;
    long TotalSum = 0;
    do{
        long Sum = SumToThePower(++Number,Power);
        if(Sum == Number){
            TotalSum+=Number; Last = Number;//cout<<Number<<endl;
        }

    }while((Digits(Number)+1)*pow(9,Power)>=Number);
    //cout<<Number<<" Searched to get the last one "<<Last;
    cout<<"  Sum is "<<TotalSum<<endl;
}

long SumToThePower(long Number,int Power)
{
    int Sum = 0;
    while(Number>0)
    {
        Sum+=pow((Number%10),Power);
        Number/=10;
    }
    return Sum;
}
