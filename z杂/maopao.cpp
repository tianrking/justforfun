#include<iostream>
#include "maopao.h"
using namespace std;
void paopao::maopao(int x)
{
    int swap_x;
    int *arr=new int[x+1];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    arr[x]=0;
    for(int i =0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(arr[i]>arr[j])
            {
                swap_x=arr[i];
                arr[i]=arr[j];
                arr[j]=swap_x;
            }
        }
    }        
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;    
    }
    delete []arr;
    
} 
