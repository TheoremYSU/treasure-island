#include<bits/stdc++.h>
using namespace std;
double a[110];
struct student
{
	string name;
	int age;
	int score;
};//����ṹ�� 
//�����ṹ������
//�����鸳ֵ
//�����ṹ�� 
int main()
{
	student s={"����",18,100};  //����ṹ������ 
	student *p=&s;//�����ṹ�����
	cout<<"����"<<p->age<<"  
	����  " <<p->name<<"  ����  "<<p->score<<endl; 
   return 0;
		
}
