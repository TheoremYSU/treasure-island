#include<cstdio>
using namespace std;
int a[100];
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	int n,s=0;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if(a[i]<=(n+30))
		{
		   s=s+1;
		}
	}
	printf("%d\n",s);
	return 0;
}
