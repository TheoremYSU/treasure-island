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
	cout<<"��ַ="<<p<<endl;
	//��ָ�����ڸ�ָ�������ʼ��
	//��ָ���ǲ����Խ��з��ʵ� 
	//Ұָ�� 
	int *x=NULL;
	cout<<"zhanyong="<<sizeof(int *)<<endl;
	return 0;
}
