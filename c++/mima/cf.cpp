#include<bits/stdc++.h>
inline int sushu(int x)
{
	int time;
	if(x==1||x==2||x==3)
		time=1;
	else	
	{
	for(int i=2;i<x;i++)
	{
	if(x%i==0)
		{time=0;break;}
	else time=1;
	}
	return time;
	}
}
using namespace std;
int main()
{
	int life;
	cin>>life;
	if (life>=1&&life<=10000)
	{
	int tomorrow;
	for(int day=1;day<life-2;day++)
	{
		tomorrow=day+2;
		if (sushu(day)&&sushu(tomorrow))
			cout << day << " "<< tomorrow <<endl;}
	}
	return 0;
}
