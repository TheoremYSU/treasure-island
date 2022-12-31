#include<bits/stdc++.h>
using namespace std;
#define INF 2000
int DP[105][105],P[105][105];
int PanDuan(int a,int b,int c,int d,int x,int y)
{
	int arr[4]={a,b,c,d};
	sort(arr,arr+4);
    for(int i=0;i<4;i++)
	{
		if(arr[i]>P[x][y])
		return arr[i-1];
	 } 
}
int LMax(int i,int j)
{
	if(DP[i][j]!=INF)
	{
		return DP[i][j];
	}
	if(P[i][j]==1)
	{
		DP[i][j]=1;
		return 1;
	}
    if(P[i][j]<P[i+1][j]&&P[i][j]<P[i-1][j]&&P[i][j]<P[i][j+1]&&P[i][j]<P[i][j-1])
	{
		DP[i][j]=1;
		return 1;
	}
	else{ 
		DP[i][j]=PanDuan(LMax(i+1,j),LMax(i-1,j),LMax(i,j+1),LMax(i,j-1),i,j)+1;
		return DP[i][j];
	}
}
int main()
{
	int C,R;
	cin>>R>>C;
	for(int i=0;i<=R+1;i++)
	for(int j=0;j<=C+1;j++)
	{
		P[i][j]=INF;
	}
	for(int i=1;i<=R;i++)
	for(int j=1;j<=C;j++)
	{
		cin>>P[i][j];
	}
	int max=0;
	for(int i=1;i<=R;i++)
	for(int j=1;j<=C;j++)
	{
		LMax(i,j);
		if(LMax(i,j)>max) max=LMax(i,j);
	}
	cout<<max;
}
