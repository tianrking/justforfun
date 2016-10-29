#include<iostream>
void defzzxc(int &,int &);
template<class t>
void swap(t &a,t &b);
template<class t>
void swap(t &a,t & b);
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
