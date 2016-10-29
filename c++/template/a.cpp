#include<iostream>
template <class t>
void deft(t& a,t& b)
{
    t temp;
    temp=a;
    a=b;
    b=temp;
}
namespace tt
{
    int a,b,c;
}
int main()
{    
    
    std::cin>>tt::a;
    std::cin>>tt::b;
    deft(tt::a,tt::b);
    std::cout.width(5);
    std::cout <<tt ::a <<std::endl;
    std::cout.width(5);
    std::cout<< tt::b;
    return 0;
}
