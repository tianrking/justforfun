#include<iostream>
template <class  p>
p sum ( p, p ,p);
int main()
{
    int a=3,b=5,c=1000,d;
    d=sum(a,b,c);
    std::cout << d;
	std::cin.get();
    return 0;
}
template <class p>
p sum ( p m, p n ,p z)
{
    p i,sum=0;
    for(i=1;i<z;i++)
    {
        if(i%m==0||i%n==0)
            sum+=i;
    }
    return sum;
}
