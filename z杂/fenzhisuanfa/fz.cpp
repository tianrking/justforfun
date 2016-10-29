#include<iostream>
using namespace std;
template <class fkfz>
void fzsort(fkfz *arr,int q, int k ,int z)
{
    int x;
    int n_l=k-q+1;
    int n_r=z-k;
    fkfz *L=new fkfz [n_l];
    fkfz *R=new fkfz [n_r];
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
void fzmain(fkfz * arr,int q,int z)
{
    int k;
    if (q<z)
    {
        k=(q+z)/2;
        fzmain(arr,q,k);
        fzmain(arr,k+1,z);
        fzsort(arr,q,k,z);
    }
}
int main()
{
    int n,i;
    cin>>n;
    int *arr=new int[n+1];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[n]=0;
    fzmain(arr,0,n-1);
    
    for(i=0;i<n;i++)
    {
        cout<<*(arr+i)<<endl;}
    cin.get();
    cin.get();
    return 0;
}
