#include<bits/stdc++.h>
int sum_digit(unsigned long num)
{
    auto numbr = std::to_string(num);
    int sum = 0;
    std::for_each(numbr.begin(),numbr.end(),[&](char c){sum+= c-'0';});
    return sum;
}

bool is_psm(unsigned long num)
{
    int smdig = sum_digit(num);
    int lgp = int(std::log(num)/std::log(smdig));
    //std::cout<<num<<" log "<<smdig<<" is "<<lgp<<" and power is "<<std::pow(smdig,lgp)<<std::endl;
    return std::pow(smdig,lgp) == num ? true : false;
}

void find_that() 
{
    int cnt = 0;
    unsigned long num=80;
    std::set<int> Psm = {};
    while(cnt<30)
    {
        if (is_psm(++num)){
            int smdig = sum_digit(num);
            int lgp = int(std::log(num)/std::log(smdig));
            std::cout<<cnt<<" . "<<num<<" = "<<smdig<<" ^ "<<lgp<<std::endl;
            Psm.insert(num);
            cnt++;
        }
    }

    std::for_each(Psm.begin(),Psm.end(),[&](int num){std::cout<<num<<" ";});
    std::cout<<std::endl;
}

void new_find()
{
    using ull = unsigned long long;
    int baseinc = 110;
    int powrinc = 110;
    int cnt = 0;
    std::set<ull> Powers = {};
    int bi = 1; int pi = 1;
    for(int base = 2; base < bi*baseinc; ++base){
        for(int powr = 2; powr <pi*powrinc; ++powr){
            ull num = std::pow(base,powr);
            int smd = sum_digit(num);
            //std::cout<<base<<" ^ "<<powr<<" = "<<num<<" with sum "<<smd<<std::endl;
            if(smd == base){
                cnt ++;
                Powers.insert(num);
                std::cout<<cnt<< " . "<<num<<" = "<<base<<" ^ "<<powr<<" sum = "<<smd<<std::endl;
            }
        }
    }
    int cn = 0;
    for_each(Powers.begin(),Powers.end(),[&](ull a){std::cout<<++cn<<" ."<<a<<std::endl;});
}


int main()
{
    new_find();
    return 0;
}



