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
	student arr[3]=
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66} 
		
	};
	for(int i=0;i<=2;i++)
	{
		cout<<"����  "<<arr[i].name
		<<"  ����  "<<arr[i].age
		<<"  ����  " <<arr[i].score<<endl;
	}
   return 0;
		
}
		
		

