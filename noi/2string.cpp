#include<iostream>
#include<string>
struct
{   std::string a;} xd;
int main()
{
    std::getline(std::cin,xd.a);
    int xdd=xd.a.size();
    if (xdd>80)
        return 0;
    for(int b=0;b<xdd ;b++)
    {    
	if((xd.a[b]>=97)&&(xd.a[b]<=122))
	{    xd.a[b]=xd.a[b]-32 ;}
        else if((xd.a[b]>=65)&&(xd.a[b]<=90))
        {    xd.a[b]=xd.a[b]+32;  }
        
    }
    for(int b=0;b<=xdd;b++)
    {
    std::cout<<xd.a[b];
    }
    return 0;
}
