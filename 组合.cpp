#include<bits/stdc++.h>
using namespace std;
 int n,r;
 int a[110];
 int v[110];
 void dfs(int k)
 {
 	if(k==r+1)
 	{
 		for(int i=1;i<r;i++) printf("%d",a[i]);
 		printf("%d\n",a[r]);		
	 }
	 else
	 {
	 	for(int i=a[k-1]+1;i<=n;i++)
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
 	scanf("%d%d",&n,&r);
	 for(int i=1;i<=n;i++) v[i]=1;
	 dfs(1);
	 return 0;	
 }
