#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int palou(int k)
{
	if(a[k]!=0)
	return a[k];
	else if(k==1) return 1;
	else if(k==2) return 2;
	else return a[k]=palou(k-2)+palou(k-1);
	
}
int main()
{
	
      int n;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++)
	  {
	  	cin>>a[i];
		}
			for(int i=0;i<n;i++)
			{
				cout<<palou(a[i])<<endl;
			}
      
}
 
