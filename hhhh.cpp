#include<bits/stdc++.h>
using namespace std;
int Max[1001];
int main()
{
    int n,a[1001];
    cin>>n;
    for(int i=1;i<=n;++i)
    {
    	cin>>a[i];
    	Max[i]=1;
	}
	for(int i=2;i<=n;++i)
	{
		for(int j=1;j<=i;++j)
		{
			if(a[i]>a[j])
			{
				Max[i]=max(Max[i],Max[j]+1);
			}
		}
	}
	cout<<*max_element(Max+1,Max+n+1);
	return 0;
}
