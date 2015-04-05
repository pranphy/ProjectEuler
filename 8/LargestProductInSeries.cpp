#include<bits/stdc++.h>

using namespace std;
double LogProduct(vector<int>);
int main()
{
	ifstream File("Number.txt");
    double  Max = 0;
	vector<int> Result;

	int JPT = 1;
	int NOD = 13;

	for(int i = 0;i < 1000-NOD; i++)
	{
		vector<int> Digits;
		File.seekg(i,ios::beg);
		for(int j=0;j<NOD;j++)
		{
			char c;
			File>>c;
			Digits.push_back(c-'0');
		}
		double Prd = LogProduct(Digits);

		for(int j:Digits){
			cout<<j;
		}
		cout<<" = "<<setw(12)<<Prd<<setw(5);
		if(Prd > Max){
			Result = Digits;
			Max = Prd; //cout<<" N ";
		}
		JPT++;
		if(JPT%3 == 0)
            cout<<endl;
	}
	for(int p:Result)
		cout<<p;
    cout.precision(19);
    double Ans = (Max);
    cout<<" From Long Long unsigned is "<<Ans<<endl<<endl;
    cout<<" Product from "<<Max<<" is "<<(Max);
}

double LogProduct(vector<int> Digits)
{
	double Product = 1;
	for(int p : Digits){
		Product *= p;
    }
	return Product;
}
