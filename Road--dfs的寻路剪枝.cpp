#include<bits/stdc++.h>
using namespace std;
int K,N,R;
struct road{
	int d,l,c;
};
vector<vector<road> > G(110);
int MinL[110][10010];
int Minroad,totalLen,totalCost;
int Visit[110];
void dfs(int s)
{
	if(s==N)
	{
		Minroad=min(Minroad,totalLen);
		return;
	}
	for(int i=0;i<G[s].size();i++)
	{
	  road r=G[s][i];
	  if(totalCost+r.c>=K)
	  continue;
	  if(!Visit)
	  {
	  	if(totalLen+r.l>=Minroad)
	  	continue;
		if(totalLen+r.l>=MinL[r.d][totalCost+r.c])
		   continue;
		MinL[s][totalCost+r.c]=totalLen+r.l;
		Visit[r.d]=1;
		totalLen+=r.l;
		totalCost+=r.c;
		dfs(r.d);
		Visit[s]=0;
		totalLen-=r.l;
		totalCost-=r.c;
	  }
	}

}
int main()
{
	cin>>K>>N>>R;
	for(int i=0;i<N;i++)
	for(int j=0;j<R;j++)
	{
		road r;
		int s;
		cin>>s>>r.d>>r.l>>r.c;
		if(s!=r.d)
		{
			G[s].push_back(r);
		}
	}
	memset(Visit,0,sizeof(Visit));
	for(int i=0;i<110;i++)
	for(int j=0;j<10010;j++)
	    MinL[i][j]=1<<30;
	Minroad=1<<30;
	totalLen=0;totalCost=0;
	Visit[1]=1;
	dfs(1);
	if(Minroad<(1<<30))
	{
		cout<<Minroad;
	}
	else{
		cout<<"-1";
	}
	return 0;
}
