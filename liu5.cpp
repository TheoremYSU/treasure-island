#include<cstdio>
#include<cmath>
using namespace std;
int panduan1(int x)
{
	int x1,x2;
    x1=x%10;
    x2=x/10%10;
    if(x1==x2)return 1;
	else return 0;
	}
int panduan2(int x)
{
	int x1,x2,x3;
	x1=x%10;
	x2=x/10%10;
	x3=x/100%10;
	if(x1==x3)return 1;
	else return 0;
}
int panduan3(int x)
{
	int x1,x2,x3,x4;
	x1=x%10;
	x2=x/10%10;
	x3=x/100%10;
	x4=x/1000%10;
	if(x1==x4 && x2==x3)return 1;
	else return 0;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		if(i<10)
		{
			printf("%d\n",i);						
		}
		else if(i<100)
		{
			if(panduan1(i)==1)
			{
				printf("%d\n",i);
			}
		}
			else if(i<1000)
			{
				if(panduan2(i)==1)
				{
					printf("%d\n",i);
				}
			}
				else 
				{
					if(panduan3(i)==1);
					{
						printf("%d\n",i);
					}
				}
	}
	return 0;
}
