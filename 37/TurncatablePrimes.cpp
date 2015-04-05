#include<bits/stdc++.h>

using namespace std;
bool isPrime(long);
int main()
{
	string Number;
	int Counter = 0;
	do
	{


bool isPrime(long Number)
{
	if(!(Number & 1)) return false;
	for(long j=2;j<=sqrt(Number)+1;j++)
		if(!(Number%j)){
			return false;
	return true;
}



