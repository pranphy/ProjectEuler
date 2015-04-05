#include<bits/stdc++.h>

using namespace std;

int gpssttp(long p){
  float j = sqrt(p);
  if(j == int(j)) return j-1;
  return int(j);
}


bool isPrime(int Number)
{
    if(Number == 1) return false;
	if(Number==2) return true;
    if(!(Number&1)) return false;
    int Upto = sqrt(Number);
    for(int j=2;j<=Upto;j++)
        if((Number%j )==0)
            return false;
    return true;
}

long NextOddComposite(long x){
	for(x+=2;;x+=2)
		if(!isPrime(x)) return x;	
}

bool isThis(long Num){
	int CurPrime = Num;
	int ts = 2;
	for(int k = gpssttp(CurPrime); k>0; k--){
		long CurSqr = pow(k,2);
		long Diff = CurPrime - CurSqr * ts;
		if(Diff > 0 and isPrime(Diff)) {
			//cout<<CurPrime<<" = "<<Diff<<" + "<<ts<<" x "<<CurSqr<<endl;
			return false;
		}
	}
	return true;
}

int main(){
	long CurOddComposite = 33;
	int p = 0;
	for(;;CurOddComposite = NextOddComposite(CurOddComposite)){
		if(isThis(CurOddComposite)) break;
	}
	cout<<CurOddComposite<<" Has this property "<<endl;
}
