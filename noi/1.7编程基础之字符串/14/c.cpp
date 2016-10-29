#include<iostream>
#include<iostream>
int main(){int x;char h;while(std::cin.get(h)&&x<80){if(islower(h))std::cout<<(char)toupper(h);else if(isupper(h))std::cout<<(char)tolower(h);else std::cout<<h;x++;}return 0;}

