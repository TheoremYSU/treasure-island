#include<bits/stdc++.h>
#include<vector>
using namespace std;
 signed main()
 {
 	vector<int> q;
 	int n,x;
 	cin>>n;
 	for(int i=1;i<=n;i++)
 	{
 		cin>>x;
 		q.push_back(x);
	 }
	for(int i=0;i<5;i++)
	{
		cout<<q[i]<<" ";
	}
	cout<<endl;
 	return 0;
  } 
