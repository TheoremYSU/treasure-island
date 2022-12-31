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
	student arr[3]=
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66} 
		
	};
	for(int i=0;i<=2;i++)
	{
		cout<<"姓名  "<<arr[i].name
		<<"  年龄  "<<arr[i].age
		<<"  分数  " <<arr[i].score<<endl;
	}
   return 0;
		
}
		
		

