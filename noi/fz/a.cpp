#include<iostream>
/*降序排列*/
int i,q;
using namespace std;
void fz(int z[],int b,int d);
void ddforfz(int z[],int p,int r);
int main()
{
	int n,o,p;
	cin>>n;
	int *sz=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>sz[i];
	}
	ddforfz(sz,0,n);
	cout << sz ;
	delete []sz;
	cin.get();
	cin.get();
	return 0;
}
void fz(int z[],int b,int d)
{
	int h=(d-b)/2;
	int *l=new int[h];
	int *r=new int[d-b-h];
	for(i=0;i<h;i++)
	{
		l[i]=z[b+i];
		r[i]=z[b+i+h];
	}
	if (2*h!=d-b)
	{
		r[h+1]=z[d];
	}
	int x_1=0,x_2=0;
	for(i=0;i<d;i++)
	{
		if(l[x_1]<=r[x_2])
		{
			z[i]=l[x_1];
			x_1++;
		}
		else
		{
			z[i]=r[x_2];
			x_2++;
		}
	}
}
void ddforfz(int z[],int p,int r)
{
	if(p<r)
	{
		q=(r+p)/2;
		ddforfz(z,p,q);
		ddforfz(z,q,r);
		fz(z,p,r);
	}
}
		

