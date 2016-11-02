#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::vector;
using std::ofstream;
int main(int argc,char *argv[])
{
	string filename;
	ofstream fout;
	if(argc==1)
	{	
	cout<<"Enter name for new file: ";
	cin>>filename;
	
        fout.open(filename.c_str());
	//ofstream fout(filename.c_str(),ios_base::out|ios_base::app);
	}
	else 
	{
	filename=argv[1];	
	//ofstream fout;
	fout.open(filename.c_str());
	//ofstream fout(argv[1],ios_base::out|ios_base::app);
	}
	vector <char> fn(filename.begin(),filename.end());
	vector <char>::iterator arr=fn.begin();
	while(arr!=fn.end())
	{
		fout<<*arr<<" ";
		arr++;
	}
	fout.close();
	return 0;
}
