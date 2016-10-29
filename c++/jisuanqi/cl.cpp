#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{   int q;
do{
cout << "99 to start " <<endl;
cout << "____\b\b\b\b" ;
cin >> q;
} while(q!= 99);
cout << "1 use +"<< endl;
cout << "2 use -"<< endl;
cout << "3 use *"<< endl;
cout << "4 use /"<< endl;
printf("Input:________________");
cout <<"  (number to choose)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"  ;
int z;
cin >> z;
char p ;
while  ( p!='y')
{
cout << "use y to stop it"<< endl;
p=='y';
if(z==1)
{
cout << "a:___________\b\b\b\b\b\b\b\b\b" ;
double a;
cin >> a;
cout << "b:___________\b\b\b\b\b\b\b\b\b";
double b;
cin >> b;
cout <<"a+b="<< a+b<<endl;
}
else if(z==2)
{
cout << "a:___________\b\b\b\b\b\b\b\b\b" ;
double a;
cin >> a;
cout << "b:___________\b\b\b\b\b\b\b\b\b";
double b;
cin >> b;
cout <<"a-b="<< a-b<<endl;
}
else if (z==3)
{
cout << "a:___________\b\b\b\b\b\b\b\b\b" ;
double a;
cin >> a;
cout << "b:___________\b\b\b\b\b\b\b\b\b";
double b;
cin >> b;
cout <<"a*b="<< a*b<<endl;
}
else if (z==4)
{
cout << "a:___________\b\b\b\b\b\b\b\b\b" ;
double a;
cin >> a;
cout << "b:___________\b\b\b\b\b\b\b\b\b";
double b;
cin >> b;
cout <<"a/b="<< a/b<<endl;
}
else
{
cout << " but u r wrong   lol :(";
}
cin >> p;
}
cout << "Power by TIANRKING  :)))))" << endl;
cout <<"Thanks for using";
return 0;
}
