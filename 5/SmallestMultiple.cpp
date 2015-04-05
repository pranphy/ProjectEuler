#include<bits/stdc++.h>

using namespace std;

long findHCF(long,long);
long findLCM(long,long);

int main(){
	int Start = 20;
	long Answer = Start;
	for(int j = Start-1;j>=1;j--)
		Answer = findLCM(Answer,j);
	cout<<Answer<<endl;
}

long findHCF(long x,long y)
{
	while(x%y)
	{
		long z = x % y;
		x = y;
		y = z;
	}
	return y;
}

long findLCM(long x,long y)
{
	return (x*y)/findHCF(x,y);
}
