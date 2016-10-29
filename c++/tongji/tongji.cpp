#include<iostream>
#include<stdlib.h>
#include<fstream>
//#include<iomanip>
//#include<cmath>
using namespace std;
int abcdefg(int adcdefghjklmn);
void sum(int n) ;
int main()
{
    cout << "Input:_____\b\b\b\b\b";
    system("echo 0 >> log.txt");
    int n;
    cin >> n;
    abcdefg(n);
    return 0;
}
int abcdefg(int abcdefghjklmn)
{
    sum(abcdefghjklmn);
    ofstream tongji("tongji.txt",ios_base::out|ios_base::app);
    if(!cin >> abcdefghjklmn)
    {
        tongji.close();
        return 0;
    }
    for(int i=1;i<=abcdefghjklmn;i++)
        tongji << "*" ; 
    tongji << endl;
    cin>> abcdefghjklmn;
    abcdefg(abcdefghjklmn);
}
void sum(int n)
{
    ifstream c("log.txt");
    ofstream b;
    int g ;
    c >> g;
    int p= g+n ;
    b.open("log.txt");
    b << p ;
}
    
       
