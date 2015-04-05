#include<iostream>
#include<cmath>
using namespace std;

#define digits(x)  static_cast<int>(log10(x))+1
int main()
{
	unsigned long  a = 1,b = 1,c = 0;
	int p = 10 ;
	for(;;)
	{
        cout<<a<<endl;
        c = a+b;
		a = b;
		b = c;
		if(digits(a) == p){
			cout<<a<<endl;
			break;
        }

	}
	return 0;
}

