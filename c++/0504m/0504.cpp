#include<iostream>
#include<iomanip>
using namespace std;
double sum(int n);
int main()
{
    int a;
    cin >> a ;
    cout << setprecision(20) << sum (a) ;
    return 0 ;
}
double sum (int n)
{
    const int m =2*n+1 ;
    double sim=0;
    for (int i=1 ; i <= m ; i++ )
    {
        double z;
	z=1.0/(i+1);
	sim+=z;
    }
    return sim;
}
    
