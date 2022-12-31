#include<bits/stdc++.h>
using namespace std;
signed main()
{
	array<int,4> values{};
	for(int i=0;i<values.size();i++)
	{
		values.at(i)=i;
	 } 
	 cout<<get<3>(values)<<endl;
	return 0;
 }
