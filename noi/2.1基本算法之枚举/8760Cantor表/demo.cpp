#include<iostream>
int main()
{
	int n,m=1;std::cin>>n;
	while(n>m)
	{	n-=m++;}
	if(m%2==0)
	std::cout<<n<<"/"<<m-n+1;
	else std::cout<<m-n+1<<"/"<<n;
	return 0;
}
