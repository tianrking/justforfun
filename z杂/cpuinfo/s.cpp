#include<iostream>
#include<sstream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;
int main(int argc,char *argn[])
{
   
    string ping="ping ";
    string ip(argn[1]);
    string k=ping+ip;
    stringstream c;
    char d[30];
    c >> k; c<< d;
    c.clear();
//    for(char i=0;i<=255;i++)
  //  {
        
	cout <<d<<endl;
   // }
    //cin.get(a,20,'\n');
    //system(a);
   
    return 0;
}
