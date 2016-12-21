#include<cstring>
#include<iostream>
#include<vector>
//	template <class t>
	auto diyabs=[](long double m)->long double{long double temp=m>0?(m):(-m);return temp;};
	long double aa;
	using std::string;
	long double enter;
	int wtf;
long double xd(long double win_a,long double win_b,long double win_k)
{
	if(wtf)
		std::cout<<win_b<<std::endl;
	if(diyabs(win_a-win_b*win_b)<=win_k)
		return win_b;
	else 
		return xd(win_a,(win_b+win_a/win_b)/2,win_k);
};
int main(int argc,char *argv[])
{
	if(!strcmp(argv[1],"s"))
		wtf=1;
	else
		wtf=0;	
	std::cin>>enter;
	auto la=[=](long double a,long double b=1.0){
	long double win=xd(a,b,enter);
	return win;
	};
/*	auto lb=[&,enter](double a,double b=1.0){
	double sci=enter;
	if(diyabs(a-b*b)<=sci)
		return b;
	else
		return lb(a,(b+a/b)/2);
	};*/
	std::cin>>aa;
	aa=la(aa);
	std::cout<<aa<<std::endl;
	return 0;
}
