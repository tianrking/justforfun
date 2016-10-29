#include<iostream>
using namespace std;
/*template <class t>
void swap(t *a,t *b)
{
    t* dog;
    dog=&a;
    a=b;
    b=*dog;
    return ;
}*/
int main()
{
    struct b{int age;char id[6];int nu;};
    int sum;
    cin>> sum;cin.get();
    b *a=new b [sum];
    for(int i=0;i<sum;i++){cin.get(a[i].id,6);cin>>a[i].age;cin.get();}
//    cout.fill('+');;
    for(int i=0;i<sum;i++)
    {
    cout.width(6);
    cout<<a[i].id;
    cout<<" "<<a[i].age<<endl;
    
    }
    for(int i=0;i<12;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
    for(int j=0;j<sum;j++)
    {
	for(int k=j+1;k<sum;k++)
	{
	    if(a[j].age<a[k].age)
	    {
		b swap;
 		swap=a[j];a[j]=a[k];a[k]=swap;
	    }
        }
    }
    for(int i=0;i<sum;i++)
    {
	cout.width(6);
	cout<<a[i].id<<endl;
    }	
    return 0;
}

