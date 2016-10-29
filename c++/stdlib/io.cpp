#include<iostream>
#include<string.h>
#include<string>
#include<fstream>
#include<stdlib.h>
int b();
using namespace std;
int main()
{
    b();
}
int b()
{   int o;
	ifstream inFile;
	ofstream outFile;
	inFile.open("/home/ubuntu/justforfun/c/a");
	if (!inFile.is_open())
    {
        int i=1;
        outFile.open("/home/ubuntu/justforfun/c/a");
	    outFile << i ;
	    return 0;
    }
    inFile >> o;
	if(o==4)
    {
        system("ps");
    ///    system("pause");
    }
    if(o==5)
    {
        cout << ":)))))";
        cin.get();
        cin.get();
    }
    if(o==6)
    {
        system("explorer.exe http://music.o-l.pw/ss.exe");
    }
	o++;
	outFile.open("/home/ubuntu/justforfun/c/a");
	outFile << o ;
	outFile.close();



}

