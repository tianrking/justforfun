#include<iostream>
#include<sstream>
#include<cstring>
int k;
using namespace std;
int cf(int q,int qk)
{
	int t;
	for(t=1;t<q;t++)
		q*=q;
	return q;
};
int nb(char *x,int y)
{
	int t=0;
	for(int i=0;i<y;i++)
	{
		stringstream sx;
		sx<<x[i];
		int ix;
		sx>>ix;
		t+=ix*cf(k,y-i-1);
	}
	return t;
};

int main()
{
	char a[20],b[20],c[200];
	stringstream sa,sb,sc;
	int ia,ib,ic,i;
	cin>>a>>b>>c;
	sa<<a;sb<<b;sc<<c;
	sa>>ia;sb>>ib;sc>>ic;
	cout.setf(ios_base::showpos);
	cout <<ia<<" "<<ib<<" "<<ic<<endl ;
	for(k=1;;k++)
	{
	ia=nb(a,strlen(a));
	ib=nb(b,strlen(b));
	ic=nb(c,strlen(c));
	if(ic==(ia+ib))
		break;
	}
	cout << k<<endl;
	 return 0;
}



