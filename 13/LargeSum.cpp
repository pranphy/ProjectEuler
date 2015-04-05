#include<bits/stdc++.h>

using namespace std;


int  main()
{
    ifstream File("File.txt");
    vector<int> Digits;
    int Count = 0;
    char c;
    int OldSum = 0;
    int SeekPos = 49;
    while(SeekPos >= 0 ){
        int Sum = OldSum;
        File.seekg(SeekPos,ios::beg);
        for(int j=0; j<100;j++){
            File>>c;
            File.seekg(50,ios::cur);
            Count++;
            cout<<c<<" ";
            Sum+= c-'0';
        }
        cout<<endl;

        Digits.push_back(Sum%10);
        OldSum = static_cast<int>(Sum/10);
        cout<<Sum<<endl;
        //cin>>Sum;//<<endl;
        SeekPos--;
    }
    reverse(Digits.begin(),Digits.end());
    cout<<endl<<endl<<OldSum<<endl;
    for(int Dig:Digits)
        cout<<Dig;
    return 0;
}
