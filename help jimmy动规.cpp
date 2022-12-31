#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
#define INF 0x3f3f3f3f
int n, m;
int dp[1010][2];
struct st//����ľ��ṹ�壬x1Ϊ��˵㣬x2Ϊ�Ҷ˵㣬hΪ�߶�
{
    int x1, x2, h;
}a[1010];
//��������ʽ������ľ��ĸ߶����򣬴�С�������������Ϊ1��
bool cmp(st a, st b)
{
    return a.h < b.h;
}
//�����
void left(int i)
{
    int k = i - 1;//i��k��ľ��ı��
    while (k > 0 && a[i].h - a[k].h <= m)//������ľ��֮��ľ���С��maxʱ����
    {   //�Ƚϴ���һ��ľ������������ߵľ���������ߵľ����Ǹ���
        if (a[k].x1 <= a[i].x1 && a[k].x2 >= a[i].x1)
        {
            dp[i][0] = a[i].h - a[k].h + min(dp[k][0] + a[i].x1 - a[k].x1, dp[k][1] + a[k].x2 - a[i].x1);
            return;
        }
        else k--;
    }
    //���һ��ľ�壬�������������С��max��ֱ������ȥ���������max��˵���²�ȥ
    if (a[i].h - a[k].h <= m)dp[i][0] = a[i].h;
    else dp[i][0] = INF;
}
//���ұ�
void right(int i)
{
    int k = i - 1;
    while (k > 0 && a[i].h - a[k].h <= m)
    {
        if (a[k].x1 <= a[i].x2 && a[k].x2 >= a[i].x2)//�ж�λ���·�����ľ�岿�� 
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
        sort(a, a + n + 1, cmp);//����ľ��ĸ߶Ƚ�������
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n + 1; i++)
        {
            left(i);
            right(i);
        }
        cout << min(dp[n + 1][0], dp[n + 1][1]) << endl;//�������С���Ǹ���0�������ߣ�1�����ұ�
    }
    return 0;
}
