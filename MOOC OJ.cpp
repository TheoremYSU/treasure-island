#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s;
	cin>>s;
   for(int i=1;i<=3;i++)
   {
   	for(int j=1;j<=5;j++)
   	{
   		   	if(j<(4-i)||j>(i+2))
   	{
   		cout<<" ";
	   }
	   else{
	   	cout<<s;
	   }
	}
	cout<<endl;
   }
   

   for(int i=1;i<=2;i++)
   {
   for(int j=1;j<=5;j++)
   {
   	if(j<=i||j>(5-i))
   	{
   		cout<<" ";
	   }
	   else{
	   	cout<<s;
	   }
   }
   cout<<endl;
   }
 } 
