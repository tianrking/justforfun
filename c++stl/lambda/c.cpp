#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
int main()
{
	int c=2;
	int ar[]={5,4,3,2};
        cout <<c<<"   "<<&c<<endl;
	auto lam= [=]()mutable->void { 
		//c=c*c;
		cout <<c<<"  "<<&c<<endl;};
	//lam();
	auto px=[=](int *a,int *b)->void { sort (a,b);};
	
	auto cd=[](int *arr)->int{int f=sizeof(arr)/sizeof(int);return f;};
	int f=cd(ar);	
	cout <<f;
	
	px(ar,ar+f);
	for (int i : ar)
		cout <<i<<endl;
	return 0;
}
