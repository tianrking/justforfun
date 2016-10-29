#include<iostream>
using namespace std;
int main()
{
    char b[199];
    char c[199];
    cin >> b >> c;
    if(!(b>c))
        return 0;
    cout << b-c ;
    return 0;
}
