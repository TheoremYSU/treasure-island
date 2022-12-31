#include<iostream>
#include<string>
using namespace std;
#define MAX 1000
struct Person
{
	string name;
	int sex;//1 男 2 女  
	int age;
	string phone;
	string addr;
};
struct Addressbooks
{
	struct Person PersonArray[MAX];
	int size;
};
void addPerson(Addressbooks * abs)
{
	//通讯录已满，无法添加
	if(abs->size==MAX)
	{
		cout<<"通讯录已满，无法添加"<<endl;
		return; 
	 } 
	 else
	 {
	 	//添加具体联系人
		 string name1;
		 cout<<"请输入您的姓名" <<endl;
		 cin>>name1;
		 abs->PersonArray[abs->size].name=name1;
		 cout<<"请输入您的性别" <<endl; 
	 }
}
void showmenu() 
{
	cout<<"************************"<<endl;
	cout<<"******1 添加联系人******"<<endl;
	cout<<"******2 显示联系人******"<<endl;
	cout<<"******3 删除联系人******"<<endl;
	cout<<"******4 查找联系人******"<<endl;
	cout<<"******5 修改联系人******"<<endl;
	cout<<"******6 清空联系人******"<<endl;
	cout<<"******7 退出通讯录******"<<endl; 
	cout<<"************************"<<endl;
}
int main()
{
	int select=0;     //创建用户选择输入的变量 
	while(0)
	{
		//创建通讯录结构体变量
		Addressbooks abs;
		//初始化通讯录人数
		abs.size=0; 
		showmenu();
	cin>>select;
	switch(select)
	{
		case 1:   //1 添加联系人
		addPerson(&abs);  //利用地址传递可以修饰形参 
		   break; 
		case 2:   //2 显示联系人
		   break;
		case 3:   //3 删除联系人
		   break;
		case 4:   //4 查找联系人
		   break; 
	    case 5:   //5 修改联系人
		   break; 
		case 6:   //6 清空联系人
		   break;
		case 0:   //7 退出通讯录
		   cout<<"欢迎下次使用"<<endl; 
		   system("pause");
		   return 0;
		   break;                		   		   
	}
	}
	
	return 0;
}
