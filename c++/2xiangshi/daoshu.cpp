#include<iostream>
using namespace std;
int main()
{
    int mix,i;
    cin >> mix ;
    int xishu[mix];
    if(mix==0)
	cout << mix;
    else
    {
    for(i=0;i<mix;i++)
    {
    cin>>xishu[i];
    }
    for(i=0;i<mix;i++)
    {
    cout<<xishu[i]*(mix-i)<<" ";
    }
    }
    return 0;
}
