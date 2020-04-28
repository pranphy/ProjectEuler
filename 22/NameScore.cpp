#include<bits/stdc++.h>
/* Now that I read this this program looks awesome for 
 * its conciseness. Reall great use of std::for_each.
 * Loved it 
 */
int sum_word(std::string);


int main(){
    std::ifstream namfl("./p022_names.txt");
    std::set<std::string> Names = {};
    std::string cur_name = "";
    while(std::getline(namfl,cur_name,','))
    {
        std::string real_name = cur_name.substr(1,cur_name.length()-2);
        if(real_name.length() >0) Names.insert(real_name);
    }
    int sum =0, cnt=0;
    std::for_each(Names.begin(),Names.end(),[&](std::string word) { sum += sum_word(word)*++cnt;});
    std::cout<<" the Sum is "<<sum<<std::endl;
}

int sum_word(std::string word)
{
    int sum = 0;
    std::for_each(word.begin(),word.end(),[&](char c){ sum += c-64;});
    return sum;
}

