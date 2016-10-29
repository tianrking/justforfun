#include<iostream>
#include<fstream>
using namespace std;
long j(long);
long c(long a,long b);
int main()
{
    ofstream trk("g.txt",ios_base::app|ios_base::out);
    long g ;
    cout << "Input:____"<<"\b\b\b\b n=";
    cin >> g;
 //   cout << "R0 Rt:____,____\b\b\b\b\b\b\b\b\b";
    long d,f; 
 //   cin >> d >> f;
 /*   if (!cin >> d||!cin>>f)
    {	cout << "wrong ";
	return 0;
	}
    if (d>f)//make all d < f
    {	long t=d;
	d=f;
	f=t;
	} */
    f=g;
    for (int i=1;i <=f ;i++)
    {   d=0;
	 while (d<=i)
        {
	long ff ;
	ff=c(i,d);
	d++;
	trk << ff << "  " ;
	}
    trk <<endl;
    }
    trk.close();
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
    
