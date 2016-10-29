#include<stdio.h>

struct Info
{
    bool a;
    double b;
};

void getInfoList( vector<Info> & infoList)
{
    Info info;
    info.a = true;
    infoList.push_back(info);
}

int main()
{
    vector<Info> infoList;
    getInfoList( infoList);
    for (vector<Info>::iterator It = infoList.begin(); It != infoList.end(); It++)
    {
        printf("%f",(*It).b);
    }
    return 0;
}
