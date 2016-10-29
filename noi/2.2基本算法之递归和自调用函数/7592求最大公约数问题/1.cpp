#include<iostream>
void defzzxc(int &,int &);
template<class t>
void swap(t &a,t &b);
int main()
{
	int a,b;//default a>b;
 	std::cin>>a>>b;
	defzzxc(a,b);
	std::cout<<b;
	return 0;
	}
template<class t>
void swap(t &a,t &b)
{
	if(a<b)
	{
	t temp=a;
	a=b;
	b=temp;}
	return ;
}
void defzzxc(int &x,int &y)
{
	swap(x,y);
	while(x%y!=0){
	y=x%y;
	x=x;
	swap(x,y);
	}
	return ;
}
