#include<bits/stdc++.h>
using namespace std;
#define MAX 101
int n;
int maxsum[MAX][MAX],D[MAX][MAX];
int dongtai(int i,int j)
{
	if(maxsum[i][j]!=-1)
	return maxsum[i][j];
	if(i==n)
	maxsum[i][j]=D[i][j];
	else
	  {
	  	int x=dongtai(i+1,j);
	  	int y=dongtai(i+1,j+1);
	  	maxsum[i][j]=max(x,y)+D[i][j];
	  }
	   return maxsum[i][j];		
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=i;j++)
	{
		cin>>D[i][j];
		maxsum[i][j]=-1;
	}
	cout<<dongtai(1,1)<<endl;
}
