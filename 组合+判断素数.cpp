#include<bits/stdc++.h>
using namespace std;
 int n,r,s;
 int a[110],b[1100];
 int v[110];
 int ans;
 int pd(int x)
 {
 	if(x<2) return 0;
 	int t=sqrt(x+1);
 	for(int i=1;i<=t;i++)
 	{
 		if(x%i==0) return 0;
	 }
	 return 1;
 }
 void dfs(int k)
 {
 	if(k==r+1)
 	{
 		int s=0;
 		for(int i=1;i<r;i++)
		 {
		 	s=s+b[a[i]];
				 }
				 if(pd(s)==1) ans++;		
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
	 for(int i=1;i<=n;i++)
	 {
	 	scanf("%d",&b[i]);
	 	v[i]=1;
	 }
	 ans=0;
	 a[0]=0;
	 dfs(1);
	 printf("%d",ans);
	 return 0;	
 }
