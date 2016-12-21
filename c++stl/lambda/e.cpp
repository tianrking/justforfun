#include<iostream>
#include<vector>
//	template <class t>
	auto diyabs=[](double m)->double{double temp=m>0?(m):(-m);return temp;};
	double aa;
	double enter;
double xd(double win_a,double win_b,double win_k)
{
	if(diyabs(win_a-win_b*win_b)<=win_k)
		return win_b;
	else 
		return xd(win_a,(win_b+win_a/win_b)/2,win_k);
}
int main()
{
	std::cin>>enter;
	auto la=[=](double a,double b=1.0){
	double win=xd(a,b,enter);
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
