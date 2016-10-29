#include<iostream>
using namespace std;
template <typename fkdisplay>
void display(fkdisplay *arr ,int xt,int x0=0)
{
    while(x0<=xt)
    {
	cout << *(arr+x0)<<endl;
	x0++;
    }
}
template <class fkswap>
void swapp(fkswap & a,fkswap & b)
{
    fkswap c;
    c=a;a=b;b=c;
    return;
}
template <class fkt>
void maopao( fkt *arr,int w)
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
   display(arr,w-1);
   return ;
}
int main()
{
    int n,i;
    cin>>n;
    int *arr=new int[n];
    for(i=0;i<n;i++)cin>>arr[i];
    maopao(arr,n);
    return 0;
}
