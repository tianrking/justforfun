#include<iostream>
using namespace std;
int b(int a)
{  cout << a&& --a&& b(a);}
int main()
{ b(5);
  return 0;
}

