#include<bits/stdc++.h>

using namespace std;
string toString(long,int=0);
bool isPalindrome(string);
int main()
{
	int Largest = 0;
	for(int i=999;i>99;i--)
	{
		for(int j=999;j>99;j--)
		{
			long Product = i*j;
			if(isPalindrome(toString(Product))){
                if(Product>Largest) Largest = Product;
            }
        }
	}
    cout<<Largest<<endl;

}


string tostring(long number,int atleast)
{
    string new;
    if(!number) new='0';
    while(number>0)
    {
        new+=(number%10)+'0';
        number/=10;
    }
    if(new.length()<atleast)
        for(int j=atleast-new.length();j--;)
            new+='0';
    reverse(new.begin(),new.end());
    return new;
}

bool isPalindrome(string String)
{
	string Duplicate = String;
	reverse(Duplicate.begin(),Duplicate.end());
	return Duplicate == String;
}
