#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<cstdlib>
using namespace std;
int pcin(int a);
int main()
{
	int n;
	
	system ("del tj.txt");
	cout << "time"<<"=:";
	//ifstream gg;
	//gg.open("log.txt")
	//if (!gg.)
	cin >> n;
	pcin(n);
	return 0;
}
int pcin(int a)
{
	const int ffff=7;
	ofstream ouf("tj.txt",ios_base::out|ios_base::app);
	char b[ffff];
	cout << "pc"<< ":________\b\b\b\b\b\b\b";
	cin >> b;
	ouf << strlen(b) << "  "<<endl;
	for (int i=1;i<=a;i++)
		ouf << b;
	ouf << endl;
	//cin.get();
	//cin.get();
	cout << "time"<<"=:"<<"______"<< "n to exit"<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin >> a;
	if (!cin >>a)
		return 0;
	pcin (a);	
}
//void log(int n)

