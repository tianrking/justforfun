#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char x[100000];int b;
    cin.get(x,100000);
    int a[300]= {0};
    for(b=0;b<strlen(x);b++)
    {
        a[x[b]]++;
    }
    for(b=0;b<strlen(x);b++)
    {
        if(a[x[b]]==1)
	 {   cout << x[b] ;
	return 0;}
    }
    cout << "no" ;
    return 0;
}
