#include<bits/stdc++.h>
using namespace std;
 int n;
 int a[110];
 int v[110];
 void dfs(int k)
 {
 	if(k==n+1)
 	{
 		for(int i=1;i<n;i++) printf("%d",a[i]);
 		printf("%d\n",a[n]);		
	 }
	 else
	 {
	 	for(int i=1;i<=n;i++)
	 	if(v[i]==1)
	 	{
	 		v[i]=0;
	 		a[k]=i;
	 		dfs(k+1);
	 		a[k]=0;
	 		v[i]=1;
		 }
	 }
 }
 int main()
 {
 	scanf("%d",&n);
	 for(int i=1;i<=n;i++) v[i]=1;
	 dfs(1);
	 return 0;	
 }
