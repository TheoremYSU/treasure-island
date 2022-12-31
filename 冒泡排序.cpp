#include<cstdio>
#include<cmath>
#include<iostream>
#include<string> 
using namespace std;
double a[110];
int main()
{
	int arr[9];
	for(int i=0;i<=8;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<8;j++)
	{
		for(int i=0;i<8-j;i++)
		{
		if(arr[i]>arr[i+1])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
		}
	for(int i=0;i<=8;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
