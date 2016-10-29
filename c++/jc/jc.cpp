#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
long double sum (int n);
int fz(int z);
int jc(int x);
int fm(int y);
void intmain(int n);
int main()
{
    cout << "n=___\b\b\b" ;
    int g;
    cin >> g;
    for (int i=1 ;i<=g; i++)
    {
       intmain(i);
    }
    return 0;
}
void intmain(int n)
{
    long double suma=0;
    ofstream t;
    t.open("t.txt",ios_base::out|ios_base::app);
    for (int i=1;i<=n;i++)
    { suma+=sum(i) ;}
    cout <<setprecision(90)<< suma <<endl;
    t << setprecision(90) << suma << endl;
    t.close();
   
}
int jc(int x)
{
    int j=1;
    for (int c=1 ;c<=x;c++)
    { j*=c;}
    return j;
}
int fz(int z)
{
    z=z+2;
    return z;
}
int fm(int y)
{
    int sum;
    sum=jc(y)+jc(y+1)+jc(y+2);
    return sum ;
}
long double sum(int n)
{
    double  f_z=fz(n);
    double f_m=fm(n);
    long double k = f_z/f_m;
    return k;
}

