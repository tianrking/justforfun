#include<iostream>
#ifndef sorting_h
#define sorting_h
using namespace std;
namespace sortingbasefield{
class xd
{
	public:
template <typename fkdisplay>
void display(fkdisplay *arr ,int xt,int x0=0)
{
    while(x0<=xt)
    {
	cout << *(arr+x0)<<endl;
	x0++;
    }
}
//swap 
template <class fkswap>
void swapp(fkswap & a,fkswap & b)
{
    fkswap c;
    c=a;a=b;b=c;
    return;
}
//maopao start
template <class fkt>
fkt * maopao( fkt *arr,const int w)
{
    int x,y;
    for (x=0;x<w-1;x++)
    {
	for(y=x+1;y<w;y++)
	{
	    if(arr[x]>arr[y])
                swapp(arr[x],arr[y]);
	}
   }
   //display(arr,w-1);
   return arr ;
}
//maopao end
//fenzhi start
template <class fkfz1>
void fzsort(fkfz1 *arr,int q, int k ,int z)
{
    int x;
    int n_l=k-q+1;
    int n_r=z-k;
    fkfz1 *L=new fkfz1 [n_l];
    fkfz1 *R=new fkfz1 [n_r];
    for(x=0;x<n_l;x++)
    {
        L[x]=arr[q+x];
    }
    for(x=0;x<n_r;x++)
    {
        R[x]=arr[k+x+1];
    }
    int i=0,j=0;
    for(x=q;x<=z;x++)
    {
        if((L[i]<R[j]&&i<n_l)||(j>=n_r))
        {
            arr[x]=L[i];
            i++;
        }
        else
        {
            arr[x]=R[j];
            j++;
        }
    }
    delete []L;
    delete []R;
}  
template <class fkfz>  
fkfz *fz(fkfz * arr,int q,int z)
{
    int k;
    if (q<z)
    {
        k=(q+z)/2;
        fz(arr,q,k);
        fz(arr,k+1,z);
        fzsort(arr,q,k,z);
    }
    return arr;
}
//fenzhi end
//jiweijiu start
int *jwj(int *arr,const int n)
{
    int qop=0;int k=n-1;
    int bl=1;
    int x;
    while(bl==1)
    {
        bl=0;
        for(x=qop;x<k;x++)
        {
            if(arr[x]>arr[x+1])
            {
                swap(arr[x],arr[x+1]);
                bl=1;
            }
        }
        k--;
        for(x=k;x>qop;x--)
        {
            if(arr[x]<arr[x-1])
            {
                swap(arr[x],arr[x-1]);
                bl=1;
            }
        }
        qop++;
    }
    return arr;
}
//jiweijiu end
};
};

#endif
