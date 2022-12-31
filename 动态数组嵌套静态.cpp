#include<bits/stdc++.h>
#include<array>
using namespace std;
vector<array<int,3>> q;
signed main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int l,r,x;
		cin>>l>>r>>x;
		q.push_back({l,r,x});
	}
	for(int i=1;i<3;i++)
	{
		cout<<q[0]<<" "<<q[1]<<" "<<q[2]<<endl;
	}
	return 0;
 }
