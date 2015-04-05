#include<bits/stdc++.h>


using namespace std;

int Uniques(long);

bool Total[8]={0,0,0,0,0,0,0,0};

int main()
{
    long Susm = 0;
    vector<long> Gone;
    for(long i=1;i<2000;i++)
    {
        for(long j = 1; j<9999;j++)
        {
            long Prod = i*j;
            int Totals = Uniques(i)+Uniques(j)+Uniques(Prod);
            //cout<<i<<" uq "<<Uniques(i)<<" "<<j<<"  uq "<<Uniques(j)<<"  "<<Prod<<" Uq "<<Uniques(Prod)<<endl;
            //if(Uniques(i)<0 or Uniques(j)<0 or Uniques(Prod));
            if(Totals == 9)
			{
					cout<<i<<" x "<<j<<" = "<<Prod;
					if(find(Gone.begin(),Gone.end(),Prod) == Gone.end())
					{
							cout<< "   Qualifies "<<endl;
							Susm += Prod;
							Gone.push_back(Prod);
					}
					else
							cout<< "   Doesn't QUalify "<<endl;
					//break;
			}
            for(int p=0;p<9;p++) Total[p] = 0;
        }
    }
    cout<<Susm;

}

int Uniques(long Number)
{
    int Count = 0;
    while(Number>0)
    {
        unsigned Digit = Number%10;
        if(Digit)
        {
            //cout<<" Current Digit "<<Digit<<endl;
            if(Total[Digit-1]){
                return -1;
            }
            else{
                Total[Digit-1] = true;
                Count++;
            }
        }else return -1;
        Number/=10;
    }
    return Count;
}
