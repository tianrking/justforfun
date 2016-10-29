#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int size=1000;
int main()
{
    char b[1000];
    int c[1000]={0};
    int i,j,k,n;
    //cin.getline(b,1000);
    cin>>b;
    size=strlen(b);
    k=(size+1)/2;
    for(i=0;i<size;i++)
    {
        int time=0;
        for(j=0;j<size;j++)
        {
            
            if(b[i]==b[j])
            {
                time++;
            }
        }
        c[i]=time; 
    }
    n=0;
    for(i=0;i<size;i++)
    {
        while(c[i])
        {
            n++;
            break;
            }
    }
    for(i=0;i<n;i++)
    {
        cout<< c[i];
    }
<<<<<<< HEAD
//the fuck beginning 
    while(c[n])
    {
        //
=======
    cout << endl;
    n=c[0];
    for(i=0;i<k;++i)
    {
        if(n<=c[i+1])
            n=c[i+1];
        else
            n=n;
    }
    for(i=0;i<size;++i)
    {
        if(c[i]==n)
            cout << b[i] <<" " << c[i] << endl;
    }
>>>>>>> 55213a08506262ded0be7002ffd3fadf1e41bd6a
    cin.get();
    cin.get();
    //
    return 0;
}

    
