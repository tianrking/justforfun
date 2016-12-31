#include<functional>
#include<iostream>
#include<vector>
int main()
{
//	std::function< int(int)> ab;
	auto diyabs=[](double m)->double{double temp=m>0?(m):(-m);return temp;};
	double aa,enter;
	std::cin>>enter;
	auto la=[&,enter](double a,double b=1.0)->double{
	double sci=enter;
	ab=la;
	if(diyabs(a-b*b)<=sci)
		return b;
	else 
		return lb(a,(b+a/b)/2);
	};
	auto lb=[&,enter](double a,double b=1.0){
	double sci=enter;
	if(diyabs(a-b*b)<=sci)
		return b;
	else
		return la(a,(b+a/b)/2);
	};
	std::cin>>aa;
	aa=la(aa);
	std::cout<<aa<<std::endl;
	return 0;
}
