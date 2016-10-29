#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){//控制行数 
	    for(j=1;j<=(5-i);j++){
    		cout<<" ";//控制输出空格 
    	}
    	for(j=1;j<=(2*i-1);j++){
	    	cout<<"*";//控制输出* 
	    }
	    cout<<endl;//每一行进行换行 
	}
	return 0;
} 
