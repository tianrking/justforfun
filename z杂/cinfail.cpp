#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
typedef char ch;

void abc(const ch a[],int l);
int main(){
    ch a;int b=0;ch c[100];
    cin>>a;
    while(a!='#')
    {
        c[b]=tolower(a);
		b++;
		cin>>a;}
    cout << b;
    b=strlen(c);
    char *d=new ch[b+1];
    d[b]='\0';
	abc(d,b+1);
	delete [] d;
    cin.get();
    cin.get();
    return 0;
}
void abc(const ch a[],int l)
{
 	 int B=0;
 	 for(;B<l;B++)
 	 {
	     cout << a[B];
		 }
return ;
}
 	 

