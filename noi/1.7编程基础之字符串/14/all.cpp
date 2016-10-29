#include<iostream;cctype>
typedef char c;typedef int i;
int main()
{
    int x=0;char ch;
    while(std::cin.get(ch)&&(x<80))
    {
        if(islower(ch))
	    std::cout << (char)toupper(ch) ;
        else if(isupper(ch))
	    std::cout << (char)tolower(ch) ;
        else
	    std::cout << ch ;
        x++;
        
    }
    return 0 ;
}
