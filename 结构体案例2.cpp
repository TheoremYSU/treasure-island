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
	cout<<"�����  "<<endl;
	 for(int i=0;i<len;i++)
	{
	   cout<<"������  "<<heroArr[i].name<<"   ���䣺   "<<heroArr[i].age<<"   �Ա�   "<<heroArr[i].sex<<endl;
	 }
}
int main()
{
	struct Hero heroArr[5]=
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},		  		  
		
	};
	int len=sizeof(heroArr)/sizeof(heroArr[0]);
	for(int i=0;i<len;i++)
	{
	   cout<<"������  "<<heroArr[i].name<<"   ���䣺   "<<heroArr[i].age<<"   �Ա�   "<<heroArr[i].sex<<endl;
	 }
	 bub(heroArr,len) ;
	 printhero(heroArr,len);
	 return 0;
}
		
