#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#define ME0(X) memset((X), 0, sizeof((X)))
using namespace std;
const int L=100;
string dp[100][100];
string add(string a,string b)//只限两个非负整数相加
{
    string ans;
    int na[L]= {0},nb[L]= {0};
    int la=a.size(),lb=b.size();
    for(int i=0; i<la; i++)
        na[la-1-i]=a[i]-'0';
    for(int i=0; i<lb; i++)
        nb[lb-1-i]=b[i]-'0';
    int lmax=la>lb?la:lb;
    for(int i=0; i<lmax; i++)
        na[i]+=nb[i],na[i+1]+=na[i]/10,na[i]%=10;//加法进位 
    if(na[lmax])
        lmax++;
    for(int i=lmax-1; i>=0; i--)
        ans+=na[i]+'0';//重新转化为int 
    return ans;
}
string mins(string a,string b)//判断大小
{
    if(a.length()<b.length())
        return a;
    else if(b.length()<a.length())
        return b;
    else
        return a<b?a:b;
}
int main()
{
    int m;
    string s;
    while(cin >> m >> s)
    {
        s=" "+s;
        int len=s.length();
        for(int i=0; i<=len; i++)
            dp[i][0]=s.substr(1,i);
        for(int j=1; j<=m; j++)
        {
            for(int i=0; i<=len; i++)
            {
                for(int x=j; x<i; x++)
                {
                  //前x个数和"+"相等时，显然不成立，x个数最多有x-1个"+"，所以要单独处理
                  //边界条件直接令前x个数有x个加号等于x个数有x减1个，不影响结果 
                    if(x==j)
                        dp[i][j]=add(dp[x][j-1],s.substr(x+1,i-x));
//                    其他的情况，状态转移方程即可
                    else
                        dp[i][j]=mins(dp[i][j],add(dp[x][j-1],s.substr(x+1,i-x)));
                }
            }
        }
        cout << dp[len][m] << endl;
    }
}

