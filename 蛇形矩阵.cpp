#include<bits/stdc++.h>
using namespace std;
//�ң����£��£����� 
const int dx[4]={0,1,1,-1};
const int dy[4]={1,-1,0,1};//������� 
int a[20][20];
int main()
{
	int n,i,j,k,x,y,t;
	scanf("%d",&n);
	memset(a,-1,sizeof(a));//��ʼ��Ϊ-1 
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	a[i][j]=0;   //��Ҫ�ߵĸ��Ӹ�ֵΪ0��ʹ-1��Ϊǽ�� 
	x=1;y=1;k=1;t=0;
	while(k<=n*n)
	{
		a[x][y]=k;
		k++;
		if(k>=n*n) break;
		
		while(a[x+dx[t]][y+dy[t]]!=0)//���ת�� 
		{
			t++;if(t==4) t=0;
		}
		x=x+dx[t];
		y=y+dy[t];
		if(t==0||t==2) t++; 
	}
	for(i=1;i<=n;i++)
	{	
	for(j=1;j<=n;j++)
	printf("%4d",a[i][j]);
	printf("\n");
}
return 0;
}
