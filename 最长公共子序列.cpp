#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[100],s2[100];
	int s[100][100];
	cin>>s1>>s2;
	int len1=strlen(s1);
	int len2=strlen(s2);
	for(int i=0;i<len1;i++)
	{
		s[i][0]=0;
	}
	for(int j=0;j<len2;j++)
	{
		s[0][j]=0;
	}
	for(int i=1;i<=len1;i++)
	for(int j=1;j<=len2;j++)
	{
		if(s1[i-1]==s2[j-1])
		{
		s[i][j]=s[i-1][j-1]+1;	
		}
		else{
			s[i][j]=max(s[i-1][j],s[i][j-1]);
		}
	 }
	 cout<<s[len1][len2]<<endl;
	 return 0; 
}
