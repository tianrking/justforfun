#include<iostream>
#include<fstream>
int main()
{
	using namespace std;
	ofstream trk("log.txt",ios_base::app|ios_base::out);
	char ch='y';
	do{
	int max,i,x,a;
	cout <<"输入最高次项指数"<<":____\b\b\b\b";
	cin>> max;
	cout<< "输入变量数值"<<":____\b\b\b\b";
	cin>>x;
	int s[max+1];
	cout<<"请按照升次顺序输入各项系数";
	for(i=0;i<=max;i++)
		cin>>s[i];
	for(i=0;i<=max;i++)
	{
		if(i==0)
		{
			s[i]=s[i];
			cout<<s[i]<<"x^"<<i<<" ";
			trk<<endl;
			trk<<s[i]<<"x^"<<i<<" "<<"+";
		}
		else
		{
			int aa=1;
			for(a=1;a<=i;a++)
				aa*=x;
			s[i]=s[i]*aa;
			cout<<s[i]<<"x^"<<i<<" ";
			if(i!=max)
				trk<<s[i]<<"x^"<<i<<" "<<"+";
			else
				trk<<s[i]<<"x^"<<i;
		}
	}
	cout<<endl;
	trk << endl;
	int sum=0;
	for(i=0;i<=max;i++)	
		sum+=s[i];
	cout<<sum<<endl;
	trk << sum <<endl;
	cout << "是否关闭"<<endl<<"____[y/n]\b\b\b\b\b\b\b";
	cin>> ch;
	}while(ch=='n'||ch=='N');
	if (ch!='n'||ch!='N')
		trk << "：） trk@o-l.pw :)))))";
	trk.close();
	return 0;
}
