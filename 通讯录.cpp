#include<iostream>
#include<string>
using namespace std;
#define MAX 1000
struct Person
{
	string name;
	int sex;//1 �� 2 Ů  
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
	//ͨѶ¼�������޷����
	if(abs->size==MAX)
	{
		cout<<"ͨѶ¼�������޷����"<<endl;
		return; 
	 } 
	 else
	 {
	 	//��Ӿ�����ϵ��
		 string name1;
		 cout<<"��������������" <<endl;
		 cin>>name1;
		 abs->PersonArray[abs->size].name=name1;
		 cout<<"�����������Ա�" <<endl; 
	 }
}
void showmenu() 
{
	cout<<"************************"<<endl;
	cout<<"******1 �����ϵ��******"<<endl;
	cout<<"******2 ��ʾ��ϵ��******"<<endl;
	cout<<"******3 ɾ����ϵ��******"<<endl;
	cout<<"******4 ������ϵ��******"<<endl;
	cout<<"******5 �޸���ϵ��******"<<endl;
	cout<<"******6 �����ϵ��******"<<endl;
	cout<<"******7 �˳�ͨѶ¼******"<<endl; 
	cout<<"************************"<<endl;
}
int main()
{
	int select=0;     //�����û�ѡ������ı��� 
	while(0)
	{
		//����ͨѶ¼�ṹ�����
		Addressbooks abs;
		//��ʼ��ͨѶ¼����
		abs.size=0; 
		showmenu();
	cin>>select;
	switch(select)
	{
		case 1:   //1 �����ϵ��
		addPerson(&abs);  //���õ�ַ���ݿ��������β� 
		   break; 
		case 2:   //2 ��ʾ��ϵ��
		   break;
		case 3:   //3 ɾ����ϵ��
		   break;
		case 4:   //4 ������ϵ��
		   break; 
	    case 5:   //5 �޸���ϵ��
		   break; 
		case 6:   //6 �����ϵ��
		   break;
		case 0:   //7 �˳�ͨѶ¼
		   cout<<"��ӭ�´�ʹ��"<<endl; 
		   system("pause");
		   return 0;
		   break;                		   		   
	}
	}
	
	return 0;
}
