#include<bits/stdc++.h>
using namespace std;
double a[110];
struct student
{
	string name;
	int age;
	int score;
};
void printStudent1(student stu)
{
	stu.age=28;
	cout<<" ����=  "<<stu.name<<"����=  "<<stu.age<<"�ɼ�=  "<<stu.score<<endl;
}
void printStudent2(student *stu)
{
	stu->age=28;
	cout<<" ����=  "<<stu->name<<"����=  "<<stu->age<<"�ɼ�=  "<<stu->score<<endl;
}
int main()
{
	student stu={"����",18,100};//ֵ����
	printStudent1(stu);
	cout<<"�������� ����=  "<<stu.name<<"����=  "<<stu.age<<"�ɼ�=  "<<stu.score<<endl;
	
	//��ַ���� 
	printStudent2(&stu);
		cout<<"�������� ����=  "<<stu.name<<"����=  "<<stu.age<<"�ɼ�=  "<<stu.score<<endl;
   return 0;
		
}
