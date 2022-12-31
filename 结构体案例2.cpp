#include<bits/stdc++.h>
using namespace std;
int arr[9];
struct Hero
{
	string name;
	int age;
	string sex;
};
void bub(struct Hero heroArr[],int len)
{
	for(int j=0;j<len-1;j++)
	{
		for(int i=0;i<len-j-1;i++)
		{
		if(heroArr[i].age>heroArr[i+1].age)
		{
			struct Hero temp=heroArr[i];
			heroArr[i]=heroArr[i+1];
			heroArr[i+1]=temp;
		}
	}
		}
	};
void printhero(struct Hero heroArr[],int len)
{
	cout<<"排序后：  "<<endl;
	 for(int i=0;i<len;i++)
	{
	   cout<<"姓名：  "<<heroArr[i].name<<"   年龄：   "<<heroArr[i].age<<"   性别：   "<<heroArr[i].sex<<endl;
	 }
}
int main()
{
	struct Hero heroArr[5]=
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},		  		  
		
	};
	int len=sizeof(heroArr)/sizeof(heroArr[0]);
	for(int i=0;i<len;i++)
	{
	   cout<<"姓名：  "<<heroArr[i].name<<"   年龄：   "<<heroArr[i].age<<"   性别：   "<<heroArr[i].sex<<endl;
	 }
	 bub(heroArr,len) ;
	 printhero(heroArr,len);
	 return 0;
}
		
