#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int x=0,a=0;char ch;
    while(std::cin.get(ch)&&(x<255))
    {	
        if(ch=='\n')  
	    break;
        if(isdigit(ch))
	    a++;
	x++;
    }
    cout << a;
    return 0 ;
}
