#include<bits/stdc++.h>
#define pprint(x) std::cout<<x

std::map<int,std::set<unsigned>> fmap;
std::string oss;
int i = 1;
std::set<unsigned> Divisors(unsigned a)
{
	std::map<int,std::set<unsigned>> fmap;
	if ( i == 4 ) {i = 0; std::system("cls");} else if(i == 1) std::cout<<++i; else if(i == 2 ) std::cout<<++i; else if(i == 3 ) std::cout<<++i;
	//std::cout<<" The divisors for "<<a<<" are being prepared "<<std::endl;
	 
	std::set<unsigned> dst = {unsigned(1),a};
	unsigned end = a;
	if(!(a&1)) { dst.insert(2); dst.insert(a>>1); end = (end>>1)-1;}
	for(unsigned d = 3; d <= end; ++d)
		if(!(a%d)) {end = a/d; dst.insert(d); dst.insert(end); --end;} 
	
	return dst;	
}

std::set<unsigned> RecDiv(unsigned a)
{
	pprint("trying for "); pprint(a); pprint("\n");
	std::set<unsigned> dst;
	unsigned sqrta = std::ceil(std::sqrt(a));
	if(a == 1) { dst.insert(1); return dst; }
	if(a&1)
	{
		std::cout<<a<<" is odd "<<std::endl;
		unsigned i = 1;
		unsigned rem = 0;
		std::cout<<" for "<<a<<" sqrta is  "<<sqrta<<std::endl;
		do{
			i += 2;
			rem = a % i;
			std::cout<<" Tried with "<<i<<" Rem is "<<rem<<std::endl;
			
			
		}while(rem);
		if(i == a) // its a prime
		{
			std::cout<<a<<" is prime "<<std::endl;
			dst.insert(1);
			dst.insert(a);
			return dst;
		}
		else
		{
			std::cout<<a<<" is composite "<<std::endl;
			unsigned quo = a / i;
			if(fmap[quo].empty()) fmap[quo] = RecDiv(quo);
			dst = fmap[quo];
			dst.insert(i);
			return dst;
		}
	}
	else // bro is even 
	{
		std::cout<<a<<" I am even bae "<<std::endl;
		unsigned quo = a>>1;
		if(fmap[quo].empty())fmap[quo] = RecDiv(quo);
		
		dst = fmap[quo];
		dst.insert(2);
		dst.insert(1);
		dst.insert(a);
		return dst;
	}
}
			

std::set<unsigned> Divisors(unsigned a, unsigned b)
{
	unsigned prd = a * b;
	std::set<unsigned> diva = Divisors(a);
	std::set<unsigned> divb = Divisors(b);
	std::set<unsigned> divab;
	
	divab.insert(diva.begin(),diva.end());
	divab.insert(divb.begin(),divb.end());
	std::for_each(diva.begin(),diva.end(),[&divab,prd](unsigned el){divab.insert(prd/el);});
	std::for_each(divb.begin(),divb.end(),[&divab,prd](unsigned el){divab.insert(prd/el);});
	divab.insert(prd);
	return divab;
}

int main()
{
	unsigned i = 2015;
	unsigned NOD = 500;
	for(;;){
		unsigned fo = i & 1 ? i : i + 1;
		unsigned fe = (i & 1 ? i + 1 : i)>>1;
		unsigned prod = fo * fe;
		//unsigned prod = 14;
		auto divisors = Divisors(prod);
		if (divisors.size() < NOD)
		{
			++i;
			divisors = Divisors(i);
		}
		else{
		std::cout<<divisors.size()<<" is the size  of "<<prod<<std::endl;
		return 0;
		}
	}
}

int oldermain()
{
	std::map<unsigned,std::set<unsigned>> fmap;
	unsigned start = 2016;
	unsigned NOD =  500;
	unsigned i = start;
	for(;i < 2016;)
	{
		unsigned fo = i & 1 ? i : i + 1;
		unsigned fe = (i & 1 ? i + 1 : i)>>1;
		unsigned prod = fo * fe;		
		if(fmap[fo].empty()) fmap[fo] = Divisors(fo);
		if(fmap[fe].empty()) fmap[fe] = Divisors(fe);
		
		
		auto divisors = Divisors(prod);
		std::cout<<divisors.size()<<" is the size  of "<<prod<<std::endl;
		for (auto p : divisors)
			std::cout<<p<< "  ";
		
		 
		
		
		
		++i;
	}
}


int oldmain()
{
	std::map<unsigned,std::set<unsigned>> fmap;
	unsigned start = 2015;
	unsigned NOD =  1;
	unsigned i = start;
	for(;;)
	{
		unsigned fo = i & 1 ? i : i + 1;
		unsigned fe = (i & 1 ? i + 1 : i)>>1;
		unsigned prod = fo * fe;		
		if (fmap[prod].empty()) fmap[prod] = Divisors(fo,fe);
		
		
		
		auto dvp = fmap[prod];
		std::cout<<" Divisor for "<<fo* fe<<"  ";
		std::for_each(dvp.begin(),dvp.end(),[](unsigned a){std::cout<<a<<" ";});
		std::cout<<std::endl;
		
		
		std::cout<<"Size for "<<prod<<" is "<<fmap[prod].size()<<std::endl;
		
		if(fmap[prod].size() >= NOD){
			std::cout<<i<<" th number "<<prod<<" has "<<fmap[prod].size()<<std::endl;
			return 0;
		}
		
		++i;
	}
}
