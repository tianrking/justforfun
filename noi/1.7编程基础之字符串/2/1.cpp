#include<iostream>
using namespace std;
int main()
{
    char x[100000];int b;
    cin.get(x,100000);
    int a[300]= {0};
    for(b=0;x[b]!='\0';b++)
    {
        a[x[b]]++;
    }
    for(b=0;x[b]!='\0';b++)
    {
        if(a[x[b]]==1)
	 {   cout << x[b] ;
	return 0;}
    }
    cout << "no" ;
    return 0;
}
