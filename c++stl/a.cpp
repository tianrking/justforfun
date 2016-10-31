#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int a;
	cout<<"vector size="<<vec.size()<<endl;
	while(cin>>a&&cout<<"0 to quit\n"&&a)
	{
		vec.push_back(a);
	}
	cin.get();
	cout<<"now vector size="<<vec.size()<<endl;
        vector<int>::iterator x=vec.begin();
	for(;x!=vec.end();x++)
		cout << "value of v = "<<*x<<" " << (int*)&(*x)<< endl;//(int*)&(*x)
	sort(vec.begin(),vec.end());
	x=vec.begin();
	while(x!=vec.end())
	{
	cout<<*x;
	x++;
	}	
	//cout<<vec[0];//*&vec[0]
	return 0;
	
}
