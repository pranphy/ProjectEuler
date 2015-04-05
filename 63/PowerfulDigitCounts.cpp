#include<bits/stdc++.h>

#define NOD(x)  static_cast<int>(log10(x))+1
using namespace std;


int main()
{
	int Count = 0;
	for(int i = 1; i< 500;i++)
		for(int j = 1; j < 500; j++)
			if(static_cast<int>(j*log10(i))+1 == j){
				cout<<i<<"^"<<j<<" has "<<j<<" digits"<<endl;
				Count++;
			}

	cout<<endl<<" \n There are "<<Count<<" of them "<<endl;
	return 0;
}
