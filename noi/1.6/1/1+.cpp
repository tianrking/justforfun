#include<iostream>
int main()
{
    using namespace std;
    int length;
    cin >>length ; 
    int nu[length],fn;
    for(int i=0;i<length;i++)
    {
	cin >> nu[i];
    }
    cin >> fn;    
    int s=0;
    for(int i=0;i<length;i++)
    {
	if(nu[i]==fn)
	{
	    s++;
	}
    }
    cout << s ;
    return 0;
}
