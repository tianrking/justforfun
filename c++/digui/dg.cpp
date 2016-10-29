#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;
void b(int c) ;
void d(int c);
int main()
{
   //const int a=20 ;
   //char b[a],c[a];
   //cin >> b >> c ;
   int a;cin >> a ;
   b(a);
}
void b(int c)
{
    d(c);
    if ( c > 0 )
          b( c-1);
    d(c) ;
}
void d(int c)
{
    ofstream e("a.txt",ios_base::out|ios_base::app);
    for( int i =1; i <= c ;i++)
    {     cout << "*" ;
          e << "*" ;}
    cout << endl;
    e << endl;
}
