#include<cstdio>
#include<cmath>
#include<iostream>
#include<string> 
using namespace std;
double a[110];
int main()
{
	int s=0;
	int arr[5]={300,350,200,400,250};
	for(int i=0;i<=4;i++)
	{
		if(arr[i]>s)
		{
			s=arr[i];
		}
		
	}
	printf("%d",s);
	
	return 0;
	
}
