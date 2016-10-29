#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   int k;char arr[1000];
   cin>>k;cin.get();
   if(k<1||k>1000)return 0;
   cin.get(arr,1000);
   int i;int j=0;
   int len=strlen(arr);
   char tem=arr[0];
   for(i=0;i<len;i++)
   {
	if(arr[i]==tem)
	{
	    j++;}
	else
	{  tem=arr[i];j=0;}
	if(j==k-1)
	{
	    cout << tem <<endl;
	    return 0;}
   }
   cout << "No"<<endl;
   return 0;
}
