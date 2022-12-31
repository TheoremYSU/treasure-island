#include<cstdio>
using namespace std;
int main()
{
	int n,i;
	double s;
	s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+1.0/i;
	}
	printf("%.5lf\n",s);
	return 0;
}
