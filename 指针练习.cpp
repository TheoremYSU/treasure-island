#include <bits/stdc++.h>
using namespace std;
int x,y,z;
int digui(int a)
{
	if(a>=4)
	{
		return digui(a-1)% 1000000007+digui(a-2)% 1000000007+digui(a-3)% 1000000007;
	}
	if(a==1) return x;
	if(a==2) return y;
	if(a==3) return z;
}
int main() {
	cin>>x>>y>>z;
	int n;
	cin>>n;
	cout<<digui(n);
}
