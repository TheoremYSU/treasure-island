#include<cstdio>
#include<cmath>
using namespace std;
int panduan(int x)
{
	if(x<=1) return 0;
	int tt=sqrt(x+1);
	for(int i=2;i<=tt;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	int c,n;
	scanf("%d",&n);
	c=panduan(n);
	if(c==0)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}
