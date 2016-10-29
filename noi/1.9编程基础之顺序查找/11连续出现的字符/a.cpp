#include<iostream>
#include<string>
int main()
{
   int k;std::string arr;
   std::cin>>k>>arr;
   if(k<1||k>1000)return 0;
   int len=arr.size();
   int i;int j=0;
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
	    std::cout << tem <<std::endl;
	    return 0;}
   }
   std::cout << "No"<<std::endl;
}
