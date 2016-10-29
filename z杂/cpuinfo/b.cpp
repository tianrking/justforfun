#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(int argc,char * argn[])
{
    int i;
    int f=atoi(argn[1]);
    ifstream mf0("/proc/meminfo",ios_base::in);
    char (*a)[50]=new char[f][50];
    for(i=0;i<f;i++)mf0.getline(a[i],50);
    for(i=0;i<f;i++)cout<<setw(40)<<a[i]<<endl;
    delete []a;
    return 0;
}
