#include<bits/stdc++.h>
using namespace std;
double a[110];
struct student
{
	string name;
	int age;
	int score;
};
void printStudent1(const student *stu)//常量指针 
{
	//stu.age=28;就会报错 
	cout<<" 姓名=  "<<stu->name<<"年龄=  "<<stu->age<<"成绩=  "<<stu->score<<endl;
}
int main()
{
	student stu={"张三",18,100};//值传递
	printStudent1(&stu);
	cout<<"主函数中 姓名=  "<<stu.name<<"年龄=  "<<stu.age<<"成绩=  "<<stu.score<<endl;
   return 0;
		
}
