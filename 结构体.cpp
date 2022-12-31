#include<bits/stdc++.h>
using namespace std;
double a[110];
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	student s1={"李四",18,100};
	cout<<"名字="<<s1.name<<  "  年龄="<<s1.age<<  "  分数="<<s1.score<<endl; 
	return 0;
}
