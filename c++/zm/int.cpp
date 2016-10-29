#include<iostream>
#define c 4 
int a= c;
using std::cout;
using std::cin;
int main()
{
    cin >> a;
    int * b=new int[a];
    for (int a=0;a<(::a);a++)
    {
	std::cin>> b[a];
    }
    std::cout <<(int *)b <<" "<<*b<< std::endl<< (int *)(b+1)<<" "<<*(b+1)<<std::endl;
    //delete b;
    return 0;
}
