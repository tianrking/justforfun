#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void b(void);
void c();
void e();
void f();
void g();
struct ggg
{
char name[15];
int number;
float dengji;
};
//int main()
void b()
{
    char b[]={'a','b','c','\0'};
cout << b<<endl;
}
void c()
{
    char c[]="abcd" ;
cout << c << endl ;
}
void e()
{
    char z[6];
    cin >> z;
    cout << strlen(z)<<endl ;
}
void f()
{
    string a,b,c;
    a="abc";
    cin >> b ;
    c=a+b;
    cout <<c << endl<<c.size()<<endl;
}
int main()
{
 ggg gg[]={

    {"a",1,80},
    {"b",2,85},
    {"c",3,90}
} ;
cout << gg[2].name << "student 3 name    ";
return 0; 
}
