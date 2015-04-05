#include<bits/stdc++.h>

using namespace std;

long SumOfIntegers(int);
long SumOfSquares(int);

int main()
{
	cout<<SumOfSquares(100)-SumOfIntegers(100)*SumOfIntegers(100);
}

long SumOfSquares(int n)
{
	return n*(n+1)*(2*n+1)/6.;
}

long SumOfIntegers(int n)
{
	return n*(n+1)/2;
}
