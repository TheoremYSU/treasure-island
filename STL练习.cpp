#include<bits/stdc++.h>
using namespace std;
struct rule1
{
	bool operator()(const int & a1,const int & a2) const {
	return a1>a2;
}
};
struct rule2
{
	bool operator()(const int & a1,const int & a2 )	const{
	return	a1%10<a2%10;
	}
};
int main()
{
	int a[]={1,2,3,4,5};
	int c[]={59,63,74,29,66,19};
	int b=sizeof(a)/sizeof(a[0]);
	int d=sizeof(c)/sizeof(c[0]);
	sort(a,a+5);
    sort(c,c+d,rule2());
	for(int i=0;i<b;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<d;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	cout<<"result: "<<binary_search(a,a+5,4)<<endl;
	cout<<"result: "<<binary_search(c,c+6,66,rule2())<<endl;
	for(int i=0;i<b;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<d;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
