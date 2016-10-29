#include<iostream>
using namespace std;
int main()
{
    char a[20];
    cin.get(a,20);
    cout <<a[0]<<" "<<(int*)a<< " "<< (bool)a[0] ;
    return 0;
}
