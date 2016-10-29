#include<iostream>
void ct(int);
int main()
{	int x,y;;
	std::cin>>x;
	for(y=2;y<=x;y++)
	{
		ct(y);
	}
	return 0;
}
void ct(int n)
{
	int a,b,c;
	for(a=2;a<=n;a++)
	{	for(b=2;b<=a;b++)
		{	for(c=2;c<=b;c++)
			{	if((a*a*a+b*b*b+c*c*c)==n*n*n)
				{	std::cout<<"Cube = "<<n<<", "<<"Triple = ("<<c<<","<<b<<","<<a<<")"<<std::endl;}
			}
		}
	}
	return;
}
