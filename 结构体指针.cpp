#include<bits/stdc++.h>
using namespace std;
double a[110];
struct student
{
	string name;
	int age;
	int score;
};//定义结构体 
//创建结构体数组
//给数组赋值
//遍历结构体 
int main()
{
	student s={"张三",18,100};  //定义结构体数组 
	student *p=&s;//创建结构体变量
	cout<<"年龄"<<p->age<<"  
	姓名  " <<p->name<<"  分数  "<<p->score<<endl; 
   return 0;
		
}
