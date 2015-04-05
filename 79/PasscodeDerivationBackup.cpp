#include<bits/stdc++.h>

using namespace std;
vector<int> Position;

ifstream Keylog("./Passcode.txt");

void Read(){
	string Current;
    Keylog>>Current;
	int i = 0;
	for(auto ch: Current)
		Position[i++]= ch-'0';
}

int Pos(int a){
	//return a;
	for(int i =0; i<3;i++)
		if(a == Position[i]){
			//cout<<a<<"-";   
			return i;
		}
	return -1;
}

void Sort(vector<int>& Array){
	int Length = Array.size();
	for(int i=0;i<Length;i++){
		for(int j = i-1; j>=0 ; j--){
			int Pi = Pos(Array.at(j)); int Pj = Pos(Array.at(j+1)); 
			if(Pi > Pj and Pi>=0 and Pj>=0 ){
				int t = Array[j];
				Array[j]=Array[j+1];
				Array[j+1]=t;
			}
		}
	}
}


int main(){
	Position.reserve(3);
	vector<int> Array = {1,7,3,0,6,2,8,9};
	int Cnt = 0;
	while(!Keylog.eof()){
		Read();
		Sort(Array);
	}

	for(auto p: Array)
		cout<<p;
}
	
