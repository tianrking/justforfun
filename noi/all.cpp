#include<iostream>
#include<cctype>
#include<cstring>
typedef char c;typedef int i;
int main()
{
    using namespace std;
    c ch;i nu;
    cin.get(ch);
    while(ch!='#')
    {
        if(islower(ch))
	    cout << (char)toupper(ch) ;
	else if(isupper(ch))
	    cout << (char)tolower(ch) ;
        else if(ispunct(ch)||iscntrl(ch))
  	    cout << " " ;
        else
	    cout << ch ;
        cin.get(ch);
    }
    return 0 ;
}
