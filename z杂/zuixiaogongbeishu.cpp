#include<iostream>
using namespace std;
int main()
{
    int k1,k2;unsigned int r=1;
    cin>>k1>>k2;
    while(k2!=0)
    {
	r=k1-k2;
	k1=k2;
	k2=r;
    }
    cout<<k1;
    return 0;
}
        
