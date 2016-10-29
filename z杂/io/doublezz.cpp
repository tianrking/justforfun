#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    /*int y,z;
    //cin >> y;
    //int *x=&y;
    //cout <<"x " << x<<endl;
    //cout <<"*x "<< *x<<endl;
    cout.fill(' ');
    int b=10;
    for(int i=1;i<=b;i++)
    {
        cout.width(i);
        cout << "o";
        cout.width(2*b-2*i+2);
        cout <<"o"<<endl;
    }
    if(b)
    {
        cout.width(b+1);
        cout <<"o"<<endl;
      
    }
    for(int i=b;i>0;i--)
    {
        cout.width(i);
        cout << "k";
        cout.width(2*b-2*i+2);
        cout <<"o"<<endl;
    }
    //cout<<"&y "<< &y<< endl;
    */
    //cout.setf(ios_base::left,ios_base::adjustfield);
    
    for(int ii=1;ii<9999;ii+=9*ii){cout.width(9);cout<<ii<<endl;}
    cin.get();  
    main();
    return 0;
}

    
