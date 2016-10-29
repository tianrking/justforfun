#include<iostream>
using namespace std;
int main()
{
	int a,b,g;
	cout << "line:____\b\b\b\b" ;
	cin >>g;
	char d;
	cout << "Input:_____\b\b\b\b";
	cin >> d;
	for (a=1;a<=g;a++)
	{
		for(b=1;b<=(g-a);b++)
		{
			cout << " " ;
		}
		for(b=1;b<=(2*a-1);b++)
		{
			if (b%2==1)
			{cout << d;}
			else
			{cout << " ";}
		}
	cout << endl;;
	}
        return 0;
}
