#include<cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(int argc,char * argn[])
{
    int i,z;
    int f=atoi(argn[1]);
    
    //ofstream mf("memfree",ios_base::out|ios_base::app);
    ifstream mf0("/proc/meminfo",ios_base::in);
    char (*a)[50]=new char[f][50];
    //char b[30];
    //mf0.getline(b,30);
    for(i=0;i<f;i++)mf0.getline(a[i],50);
    //cout << setw(40)<<b<< endl;
    for(i=0;i<f;i++)cout<<setw(60)<<a[i]<<endl;
    delete []a;
    return 0;
}
