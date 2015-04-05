#include<iostream>

using namespace std;

int main()
{
    int Input = 0;
    cin>>Input;
    unsigned long DiagonalNumber = 1,Sum = DiagonalNumber;
    unsigned long inc = 0,Cnt = 1;
	for(int Test = (Input-1)/2;Test--;)
	{
        inc+=2;
        for(int i=4;i--;){
            DiagonalNumber+=inc;
            Sum +=DiagonalNumber;
            cout<<DiagonalNumber<<"  ";
        }
        cout<<"  "<<endl;
        Cnt+=4;
	}//while(Cnt<=(Input-1)*4+1);
	cout<<" Diagonal Number Sum "<<Sum<<endl;
	return 0;
}

