#include<bits/stdc++.h> 
int main(){int x=80;char h;while(std::cin.get(h)&&x){if(islower(h))std::cout<<(char)toupper(h);else if(isupper(h))std::cout<<(char)tolower(h);else std::cout<<h;x--;}return 0;}
