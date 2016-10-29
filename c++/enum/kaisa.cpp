#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
void b(char c);
using namespace std;
int main()
{
    const int a=80;
    char c[a];
    cin >> c;
    b(c);
}    
void b(char c)
{
    using namespace std;
    
    ofstream yuan;
    ofstream passwd;
    
    for(int i=0;i<strlen(c);i++)
    {
            c[i]=c[i]+5;
            cout << c[i] ;
            }
    return 0;
}    
