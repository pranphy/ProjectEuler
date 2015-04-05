#include<bits/stdc++.h>

using namespace std;

bool isPentagonal(long x) {
    
    //cout<<tst<<" is perfect square "<<endl;
    float p = (sqrt(24*x+1)+1)/6.;
    return int(p) == p;
}

long P(long n) {
    return n*(3*n-1)/2.;
}

long npn(long pn){
	return P(int((1+sqrt(24*pn+1))/6.)+1);
}

float nk(long j){
	long p = P(j);
	int beta;
	float k; 
	do{
		beta = 3*j*j - j - 2*p;
		k = (1+sqrt(1-12*beta))/6.;
		p = npn(p);
	}while (int(k) != k);
	return k;
}

int main() {
	long p = 1;
	long Min = 99999999999;
	int j = 1000;
    for( ; j< 9999;j++){
		int k = nk(j);
		long Diff = abs(P(j)-P(k));
		if(Diff< Min and isPentagonal(Diff) ) Min = Diff;
		long Difre = P(j) - P(j-1);
		if(Min < Difre) break;
		cout<<Min<<" is min whereas consecutive diff is  "<<Difre<<endl;;
	}
	cout<<Min<<" is teh minimum terminated on count  "<<j<<endl;
}

