 #include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
#include"swap.h"
using namespace std;
int main()
{
	int a=8; 
	int *p=&a;
	cout<<"地址="<<p<<endl;
	//空指针用于给指针变量初始化
	//空指针是不可以进行访问的 
	//野指针 
	int *x=NULL;
	cout<<"zhanyong="<<sizeof(int *)<<endl;
	return 0;
}
