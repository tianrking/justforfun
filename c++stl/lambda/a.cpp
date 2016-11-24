#include<iostream>
using namespace std;
int main()
{
	int c=2;
        cout <<c<<"   "<<&c<<endl;
	auto lam= [&]()mutable->void { 
		//c=c*c;
		cout <<c<<"  "<<&c<<endl;};
	lam();
	return 0;
}
