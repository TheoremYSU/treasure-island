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
string add(string a,string b)//ֻ�������Ǹ��������
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
        na[i]+=nb[i],na[i+1]+=na[i]/10,na[i]%=10;//�ӷ���λ 
    if(na[lmax])
        lmax++;
    for(int i=lmax-1; i>=0; i--)
        ans+=na[i]+'0';//����ת��Ϊint 
    return ans;
}
string mins(string a,string b)//�жϴ�С
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
                  //ǰx������"+"���ʱ����Ȼ��������x���������x-1��"+"������Ҫ��������
                  //�߽�����ֱ����ǰx������x���Ӻŵ���x������x��1������Ӱ���� 
                    if(x==j)
                        dp[i][j]=add(dp[x][j-1],s.substr(x+1,i-x));
//                    �����������״̬ת�Ʒ��̼���
                    else
                        dp[i][j]=mins(dp[i][j],add(dp[x][j-1],s.substr(x+1,i-x)));
                }
            }
        }
        cout << dp[len][m] << endl;
    }
}

