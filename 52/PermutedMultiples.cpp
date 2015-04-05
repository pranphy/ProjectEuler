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

int main(){
	int Number = 1; 
	for(;;){
		long x =      Number;  string sx  = toString(x); sort(sx.begin(),sx.end());
		long x2 = 2 * Number; string sx2 = toString(x2);sort(sx2.begin(),sx2.end());
		long x3 = 3 * Number; string sx3 = toString(x3);sort(sx3.begin(),sx3.end());
		long x4 = 4 * Number; string sx4 = toString(x4);sort(sx4.begin(),sx4.end());
		long x5 = 5 * Number; string sx5 = toString(x5);sort(sx5.begin(),sx5.end());
		long x6 = 6 * Number; string sx6 = toString(x6);sort(sx6.begin(),sx6.end());
		if(sx == sx2 and sx == sx3 and sx == sx4 and sx == sx5 and sx == sx6){
			cout<<Number<<" has the property "<<endl;
			return 0;
		}
		Number ++;
	}
	return 0;
}
