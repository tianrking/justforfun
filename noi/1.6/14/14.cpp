#include<iostream>
int main()
{
    int a;
    std::cin>>a;
    long long s =1;
    for(int b=1;b<=a;b++)
    {
	s*=b;
    }
    std::cout<< s;
    return 0;
}
