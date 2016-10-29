#include<iostream>
using namespace std;
int i,q;
void fz(int * zz,int p,int q,int r)
{
	int nl=q-p+1;
	int nr=r-q;
	int *L=new int[nl];
	int *R=new int[nr];
	for(i=0;i<nl;i++)
	{
		L[i]=zz[p+i-2];
	}
	for(i=0;i<nr;i++)
	{
	    R[i]=zz[q+i-1];
	}
	int x_1=0,x_2=0;
	for(i=p-1;i<q-1;i++)
	{
		if(L[x_1]<=R[x_2])
		{
			zz[i]=L[x_1];
			x_1++;
		}
		else
		{
			zz[i]=R[x_2];
			x_2++;
		}
	}
	delete []L;
	delete []R;
	return ;
}
void ddforfz(int *z,int p,int r)
{
	if(p<r)
	{
		
		q=(r+p)/2;
		ddforfz(z,p,q);
		ddforfz(z,r,p);
		fz(z,p,q,r);
	}
	return ;
}
int main()
{
	int n,o,p;
	cin>>n;
	cin.clear();
	int *sz=new int[n];
	for(i=0;i<n;i++)
	{
	cin>>sz[i];
	}
	ddforfz(sz,1,n);
	for(i=0;i<n;i++)
	{
	cout << sz[i];
	} 
	delete []sz;
	cin.get();
	cin.get();
	return 0;
}


