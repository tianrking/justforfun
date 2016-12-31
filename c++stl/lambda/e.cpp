#include<iostream>
#include<vector>
<<<<<<< HEAD
//	template <class t>
	auto diyabs=[](long double m)->long double{long double temp=m>0?(m):(-m);return temp;};
	long double aa;
	long double enter;
long double xd(long double win_a,long double win_b,long double win_k)
{
	if(diyabs(win_a-win_b*win_b)<=win_k)
		return win_b;
	else 
		return xd(win_a,(win_b+win_a/win_b)/2,win_k);
}
int main()
{
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
=======

>>>>>>> be23f743929e5dccfad1fffaf88bf3b07bcea6bf
