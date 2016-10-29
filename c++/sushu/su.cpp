#include<iostream>
int main()
{   int i;
    using namespace std;
    cout << "start" <<endl;
    int b;    
    cin >> b;
    if (b==1||b==2)
    {       cout << "y" ;}
    else
    {       
    for (int i= 2;i<b ;i++)
	if (b%i==0)
        {       
	    cout << "n" <<endl;
	    return 0;}
        cout << "y"<<endl; }
    return 0;
}
	
	    
    
