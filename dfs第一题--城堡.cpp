#include<bits/stdc++.h>
using namespace std;
int R,C;
int Map[60][60];
int color[60][60];
int MAXroom=0,room,roomNum=0;
void Dfs(int i,int j)
{
	if(color[i][j]!=0) return;
	++room;
	color[i][j]=roomNum;
	if((Map[i][j] & 1)==0) Dfs(i,j-1);
	if((Map[i][j] & 2)==0) Dfs(i-1,j);
	if((Map[i][j] & 4)==0) Dfs(i,j+1);
	if((Map[i][j] & 8)==0) Dfs(i+1,j);
}
int main()
{
	cin>>R>>C;
	for(int i=1;i<=R;i++)
	for(int j=1;j<=C;j++)
	{
		cin>>Map[i][j];
	}
	memset(color,0,sizeof(color));
	for(int i=1;i<=R;i++)
	for(int j=1;j<=C;j++)
	{
		if(!color[i][j])
		{
			room=0;
			++roomNum;
			Dfs(i,j);
            MAXroom=max(MAXroom,room);
		}
	}
	cout<<roomNum<<endl;
	cout<<MAXroom<<endl;
	return 0;
}
