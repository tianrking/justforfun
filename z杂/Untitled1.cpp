    #include<iostream>
    #include<sstream>
    #include<string.h>
    using namespace std;
    int main()
    {
        long long a,b;
        char a2[200],b2[200];
        stringstream sa,sb;
        cin>>a2>>b2;
        sa<< a2;
        sb<<b2;
        sa>>a;sb>>b;
        cout << a-b<<endl;
        cout << a2 <<" " << b2;
        a=strlen(a2);b=strlen(b2);
        long long *c,*d;
        c=&a;d=&b;
        cout <<*c << " " <<*d;
        return 0;
        /*a=atoll(a2);b=atoll(b2);
        cout << a-b;
        */
    }
