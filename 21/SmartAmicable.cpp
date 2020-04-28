#include<bits/stdc++.h>
void prin(std::set<int> a)
{
    std::for_each(a.begin(),a.end(),[](int n){std::cout<<n<<" ";});
}
std::set<int> divisor_set(int i)
{
    std::set<int> divs = {1};
    for(int d = 2 ; d <= std::sqrt(i); ++d)
    {
        if (!(i % d))
        {
            divs.insert(d);
            divs.insert(i/d);
        }
    } 
    return divs;
}

 std::map<int,std::set<int>> sum_divisors(int N)
{
    std::map<int,std::set<int>> divisors = {};
    for (int i = 1; i <= N; ++i)
        divisors[i] =divisor_set(i); 
    return divisors;
}
void info(int a, std::set<int> mp)
{
    std::cout<<"divisors of "<<a<<" are ::";
    prin(mp);
    std::cout<<" sum:: "<<std::accumulate(mp.begin(),mp.end(),0)<<std::endl;
}

int sum_amicables(int N)
{
    auto divisors = sum_divisors(N);
    std::set<int> amicables = {};
    for(int i = 2; i <= N; ++i)
    {
        int sumi = std::accumulate(divisors[i].begin(),divisors[i].end(),0);
        if(sumi <= N)
        {
            int sumj = std::accumulate(divisors[sumi].begin(),divisors[sumi].end(),0);
            if ((i !=sumi) && (i == sumj)){
                std::cout<<" ====================================="<<std::endl;
                info(i,divisors[i]);
                info(sumi,divisors[sumi]);
                std::cout<<" ====================================="<<std::endl;
                amicables.insert(i);
                amicables.insert(sumi);
            }
        }
    }
    prin(amicables);
    return std::accumulate(amicables.begin(),amicables.end(),0);

}


int main()
{
    std::cout<<sum_amicables(10000)<<" is the grand number ";
}
