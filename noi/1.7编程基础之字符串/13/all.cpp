#include<iostream>
#include<cctype>
#include<cstring>
typedef char c;typedef int i;
int main()
{
    using namespace std;
    c ch;i nu;
    i x=0 ;
    while(cin>>ch&&(x<100))
    {
        if(islower(ch))
	    cout << (char)toupper(ch) ;
        else
	    cout << ch ;
        x++;
        
    }
    return 0 ;
}
