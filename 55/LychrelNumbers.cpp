#include<bits/stdc++.h>

using namespace std;

string toString(long x)
{
	string Result;
	if(!x) return string("0");
	while(x>0){
		Result += (x%10)+'0';
		x /= 10;
	}
	reverse(Result.begin(),Result.end());
	return Result;
}

bool isPalindrome(string Test)
{
	string Temp = Test;
	reverse(Temp.begin(),Temp.end());
	return Temp == Test;
}

bool isLychrel(long x)
{
	int Iterations = 0;
	long CurrentNumber = x;
	while(Iterations<50){
		Iterations++;		
		string CurrentString = toString(CurrentNumber);
		string Reverse = CurrentString;
		reverse(Reverse.begin(),Reverse.end());
		CurrentNumber = stol(Reverse)+stol(CurrentString);
		//cout<<CurrentString<<" is the string  and reverse is "<<Reverse<<endl;
		if(Iterations != 1 and isPalindrome(CurrentString) ) return false;
	}
	return true;
}

int main()
{
	int Count = 0;
	//int i = 0;
	cout<<stol(string("123456"));
	for(long i = 1000;i>0;i--){
		if(isLychrel(i))
			cout<<i<<" is Lychrel "<<endl;
	}
			
			
	return 0;
}
