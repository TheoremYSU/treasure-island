#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
#define INF 0x3f3f3f3f
int n, m;
int dp[1010][2];
struct st//定义木板结构体，x1为左端点，x2为右端点，h为高度
{
    int x1, x2, h;
}a[1010];
//定义排序方式，按照木板的高度排序，从小到大排序，下面的为1号
bool cmp(st a, st b)
{
    return a.h < b.h;
}
//从左边
void left(int i)
{
    int k = i - 1;//i，k是木板的编号
    while (k > 0 && a[i].h - a[k].h <= m)//当两个木板之间的距离小于max时运行
    {   //比较从上一个木板掉下来往左走的距离和忘有走的距离那个少
        if (a[k].x1 <= a[i].x1 && a[k].x2 >= a[i].x1)
        {
            dp[i][0] = a[i].h - a[k].h + min(dp[k][0] + a[i].x1 - a[k].x1, dp[k][1] + a[k].x2 - a[i].x1);
            return;
        }
        else k--;
    }
    //最后一个木板，如果距离地面距离小于max就直接跳下去，如果大于max就说明下不去
    if (a[i].h - a[k].h <= m)dp[i][0] = a[i].h;
    else dp[i][0] = INF;
}
//从右边
void right(int i)
{
    int k = i - 1;
    while (k > 0 && a[i].h - a[k].h <= m)
    {
        if (a[k].x1 <= a[i].x2 && a[k].x2 >= a[i].x2)//判断位置下方有无木板部分 
        {
            dp[i][1] = a[i].h - a[k].h + min(dp[k][0] + a[i].x2 - a[k].x1, dp[k][1] + a[k].x2 - a[i].x2);
            return;
        }
        else k--;
    }
    if (a[i].h - a[k].h <= m)dp[i][1] = a[i].h;
    else dp[i][1] = INF;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof(a));
        int x, y;
        cin >> n;
        cin >> x; cin >> y; cin >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].x1; cin >> a[i].x2; cin >> a[i].h;
        }
        a[n + 1].x2 = a[n + 1].x1 = x;
        a[n + 1].h = y;
        a[0].x1 = -20000;
        a[0].x2 = 20000;
        a[0].h = 0;
        sort(a, a + n + 1, cmp);//根据木板的高度进行排序
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n + 1; i++)
        {
            left(i);
            right(i);
        }
        cout << min(dp[n + 1][0], dp[n + 1][1]) << endl;//输出距离小的那个，0代表从左边，1代表右边
    }
    return 0;
}
