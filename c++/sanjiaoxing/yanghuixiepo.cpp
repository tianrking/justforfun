#include<iostream>
using namespace std;
long c(long f,long ff);
long j(long);
int main()
{
	int a,b,g;
	cout << "line:____\b\b\b\b" ;
	cin >>g;
	//int d;
	//cout << "Input:_____\b\b\b\b";
	//cin >> d;
	for (a=1;a<=g;a++)
	{
		for(b=1;b<=(g-a);b++)
		{
			cout << " " ;
		}
		long ddd=0;
		for(b=1;b<=(2*a-1);b++)
		{
			if (b%2==1)
			{cout << c(a,ddd++);}
			else
			{cout << " ";}
						
		}
	cout << " 1" <<endl;;
	}
        return 0;
}
long j(long x)
{
        long s=1;
        for (long i=1 ;i<=x;i++)
        {
            s*=i;}
        return s;
}
long c (long y,long z)
{
        long m=j(y);
        long n=j(z);
        long q=j(y-z);
        return m/(n*q);
}
