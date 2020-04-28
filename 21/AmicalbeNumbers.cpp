#include<bits/stdc++.h>


std::vector<int> Divisors(int n)
{
    std::vector<int> divisors = {};
    for (int i=1; i<=n; ++i)
        if (!(n%i))
            divisors.push_back(i);
    //std::cout<<" The divisors of "<<n<<" are "<<std::endl;
    //std::for_each(divisors.begin(),divisors.end(),[&](int n){std::cout<<n<<" ";});
    return divisors;
}


int dee(int n)
{
    auto divisors = Divisors(n);
    int sum = 0;
    for(auto & d:divisors ) sum +=d;
    //std::cout<<"The sum of divisors of "<<n<<" is "<<sum<<std::endl;
    return sum;
}

int sum_amicable()
{
    std::set<int> amicables ={};
    for(int i = 2; i< 10000; ++i)
    {
        for(int j = 2; j<10000;++j)
        {
            if (dee(i) == dee(j))
            {
                amicables.insert(j);
                amicables.insert(i);
                break;
            }
        }
    }
    std::cout<<" Amicalbles are "<<std::endl;
    std::for_each(amicables.begin(),amicables.end(),[&](int n){std::cout<<n<< " ";});
    int sum = 0;
    std::for_each(amicables.begin(),amicables.end(),[&](int n){sum =n;});
    return sum;
}

        


int main()
{
    std::cout<<sum_amicable()<<std::endl;
}
