#include<bits/stdc++.h>

using namespace std;

void PrintWords();


int main()
{
    PrintWords();
}

void PrintWords()
{
    ifstream File("p098_words.txt",ios::in);
    string Word = {};
    unsigned Longest = 0;
    string LongWord = {};
    unsigned Count = 0;
    while(getline(File,Word,','))
    {
        ++Count;
        int Length = Word.length();
        string PureWord = Word.substr(1,Length-2);
        //cout<<PureWord<<endl;
        if(Length == 16)
        {
            cout<<PureWord<<endl;
        }
        if(Length > Longest)
        {
            Longest = Length;
            LongWord = PureWord;
        }
    }
    cout<<Count<<" is this "<<endl;
    cout<<"Longest Word is "<<Longest<<" :: "<<LongWord<<endl;
}
