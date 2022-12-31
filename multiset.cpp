#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset<int> st;
	int a[10]={1,14,12,13,7,13,21,19,8,8};
	for(int i=0;i<10;i++)
	st.insert(a[i]);
	multiset<int>::iterator i;
	for(i=st.begin();i!=st.end();++i)
	cout<<*i<<",";
	cout<<endl;
}
