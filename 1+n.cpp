#include<iostream>
struct MyClass{
  MyClass(){
    sum += ++ n;
  }
  static int n; 
  static int sum;
};
int MyClass::n = 0;
int MyClass::sum = 0;
int main()
{
    int n;std::cin>>n;MyClass c[n];
    std::cout<< MyClass::sum <<std::endl;
    return 0;
}
