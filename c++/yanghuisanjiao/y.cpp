#include<iostream>
using namespace std;
int main()
{
    int len,i,j;
    int arr[50][20];
    cin >> len ;
    for (j=0; j < len; j++)
    {
        for (i=1; i < j; i++)
	{
	arr[i][j] = arr[i-1][j-1] + arr[i][j-1];
        }
    cout << arr[i][j] ;
    }
    
    return 0;
}

