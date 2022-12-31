#include<bits/stdc++.h>
using namespace std;
double a[110];
struct student
{
	string Sname;
	int score;
	
}; 
struct teacher
{
	string Tname;
	struct student Sarr[5];
};
void as(struct teacher Tarr[],int len)
{
	string nameseed="ABCDE";
	for(int i=0;i<len;i++)
	{
		Tarr[i].Tname="Teacher-";
		Tarr[i].Tname+=nameseed[i];
		for(int j=0;j<=4;j++)
		{
			Tarr[i].Sarr[j].Sname="student-";
			Tarr[i].Sarr[j].Sname+=nameseed[j];
			int random=rand()%61+40;
			Tarr[i].Sarr[j].score=random;
		}
	}
}
void print(struct teacher Tarr[],int len)
{
	for(int i=0;i<=4;i++)
	{
		cout<<"老师姓名=  "<<Tarr[i].Tname<<endl;
		for(int j=0;j<=4;j++)
		{
			cout<<"学生姓名= "<<Tarr[i].Sarr[j].Sname<<"学生成绩=  "<<Tarr[i].Sarr[j].score<<endl; 
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
   teacher Tarr[3];
    int len=sizeof(Tarr)/sizeof(Tarr[0]);
    as(Tarr,len);
    print(Tarr,len);
   return 0;
}
