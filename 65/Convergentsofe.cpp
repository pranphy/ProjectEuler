#include <bits/stdc++.h>

using namespace std;

bool isPrime(int Number)
{
    if(Number==2) return true;
    if(!(Number&1)) return false;
    int Upto = sqrt(Number);
    for(int j=2;j<=Upto;j++)
        if((Number%j )==0)
            return false;
    return true;
}

int HCF(int a,int b)
{
    do
    {
        int Tmp = b;
        b = a%b;
        a = Tmp;
    }while(b);
    return a;
}

struct Fraction
{
    int Numerator,Denomenator;
    Fraction(int a = 0,int b=1):Numerator(a),Denomenator(b){}
    Fraction Reduce()
    {
        if(isPrime(Numerator) or isPrime(Denomenator)) return *this;
        int Hcf = HCF(Numerator,Denomenator);
        return(Fraction(Numerator/Hcf,Denomenator/Hcf));
    }

    Fraction Reciprocal()
    {
        return Fraction(Denomenator,Numerator);
    }

    Fraction Reciprocate()
    {
        int Tmp = Numerator;
        Numerator = Denomenator;
        Denomenator = Tmp;
    }

    Fraction operator+(Fraction F)
    {
        int Nr = Numerator * F.Denomenator + F.Numerator * Denomenator;
        int Dr = Denomenator * F.Denomenator;
        return Fraction(Nr,Dr).Reduce();
    }

    Fraction operator++()
    {
        *this = *this + Fraction(1,1);
        return *this;
    }
    Fraction operator++(int)
    {
        Fraction tmp = *this;
        *this + Fraction(1,1);
        return tmp;
    }
};

ostream& operator<<(ostream&os,Fraction F)
{
    os<<"("<<F.Numerator<<","<<F.Denomenator<<")";
    return os;
}

int main()
{
    Fraction F(1,1);
    Fraction G(2,1);
    cout<< ++(F+G) <<endl;
}
