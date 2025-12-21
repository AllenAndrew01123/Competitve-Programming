#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    bool flag = false;
    ll idx10,idx11;
    vector<vector<ll>> arr1(n + 1, vector<ll>(n + 1));
    vector<vector<ll>> arr2(n + 1, vector<ll>(n + 1));
    vector<vector<ll>> ans1(n + 1, vector<ll>(n + 1, LLONG_MAX));
    vector<vector<ll>> ans2(n + 1, vector<ll>(n + 1, LLONG_MAX));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ll num;
            cin >> num;
            if (num == 0)
            {
                num = 10;
                flag=true;
                idx10=i;
                idx11=j;
            }
            ll cnt2 = 0, cnt5 = 0;
            while (num % 2 == 0)
            {
                cnt2++;
                num /= 2;
            }
            while (num % 5 == 0)
            {
                cnt5++;
                num /= 5;
            }
            arr1[i][j] = cnt2;
            arr2[i][j] = cnt5;
        }
    }
    ans1[1][1] = arr1[1][1];
    for (int j = 2; j <= n; j++)
    {
        ans1[1][j] = arr1[1][j] + ans1[1][j - 1];
    }
    for (int i = 2; i <= n; i++)
    {
        ans1[i][1] = arr1[i][1] + ans1[i - 1][1];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            ans1[i][j] = min(ans1[i - 1][j], ans1[i][j - 1]) + arr1[i][j];
        }
    }
    ans2[1][1] = arr2[1][1];
    for (int j = 2; j <= n; j++)
    {
        ans2[1][j] = arr2[1][j] + ans2[1][j - 1];
    }
    for (int i = 2; i <= n; i++)
    {
        ans2[i][1] = arr2[i][1] + ans2[i - 1][1];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            ans2[i][j] = min(ans2[i - 1][j], ans2[i][j - 1]) + arr2[i][j];
        }
    }
    if((min(ans1[n][n],ans2[n][n])>1)&&flag)
    {
        cout<<1<<endl;
        string s="";
        for(int i=1;i<idx10;i++)
        s.push_back('D');
        for(int i=1;i<idx11;i++)
        s.push_back('R');
        for(int i=idx10;i<n;i++)
        s.push_back('D');
        for(int i=idx11;i<n;i++)
        s.push_back('R');
        cout<<s<<endl;
        return 0;
    }
    if (ans1[n][n] <= ans2[n][n])
    {
        cout << ans1[n][n] << endl;
        ll row = n, col = n;
        string s = "";
        while (row > 1 || col > 1)
        {
            if (ans1[row - 1][col] <= ans1[row][col - 1])
            {
                s.push_back('D');
                row--;
            }
            else
            {
                s.push_back('R');
                col--;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
        return 0;
    }
    else
    {
        cout << ans2[n][n] << endl;
        ll row = n, col = n;
        string s = "";
        while (row > 1 || col > 1)
        {
            if (ans2[row - 1][col] <= ans2[row][col - 1])
            {
                s.push_back('D');
                row--;
            }
            else
            {
                s.push_back('R');
                col--;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
        return 0;
    }
}