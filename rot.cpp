#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int n;
class ca{
	private:
		;
	public:
		std::string name;
		int size;
		std::string log;
	};
void b(void);
int main()
{
	b();	
	return 0;
}
void b(void)
{
	ca df;
//	cout << "Number for ROTx"<<"___(n<26||'q' to stop)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin>>n;
	cout << "THE TEXT U WANNA ENCRYPT:\n"; 
	cin>>df.name;
	df.size=df.name.size();
	for(auto b:df.name)
	{
		if(b>96&&b<123)
		{
			if(b+n>122)					
				cout <<char(b-122+n+96);
			else
				cout <<char(b+n);
		}
		else if(b>64&&b<91)
		{
			if(b+n>91)
				cout <<char(b-90+n+64);
			else
				cout <<char(b+n);
		}
		else
			cout << b;
	}
	cout<<"(=_=)"<<endl;
	return ;
}
