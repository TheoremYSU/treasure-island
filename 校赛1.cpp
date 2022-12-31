#include<iostream>
#include<cstring>
using namespace std;
int maze[60][60],M,N;
int book[60][60];
int roomnum=0,maxroom=0,room;//��¼����������󷿼䡢Ŀǰ�����С�� 
void dfs(int x,int y)
{
	
	if(book[x][y]) return;
	
	room++;
	
	book[x][y]=1;
	
	if((maze[x][y]&1)==0) dfs(x,y-1);
 
	if((maze[x][y]&2)==0) dfs(x-1,y);
 
	if((maze[x][y]&4)==0) dfs(x,y+1);
 
	if((maze[x][y]&8)==0) dfs(x+1,y);
}
int main()
{
	cin>>M>>N;
	memset(book,0,sizeof(book));
	for(int i=0;i<M;i++) for(int j=0;j<N;j++) cin>>maze[i][j];
	for(int i=0;i<M;i++) for(int j=0;j<N;j++)
	{
		if(!book[i][j]) 
		{
			room=0;
			roomnum++;//���·����� 
			dfs(i,j);
			maxroom=maxroom>room?maxroom:room;//������󷿼� 
		}
	} 
	cout<<roomnum<<endl<<maxroom<<endl;
	return 0;
} 











