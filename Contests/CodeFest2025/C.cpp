#include <bits/stdc++.h>
using namespace std;
#define mod 10000000009
typedef long long ll;
ll booth(vector<ll> &s)
{
    int n = s.size(), i = 0, j = 1, k = 0;
    while (i < n && j < n && k < n)
    {
        int diff = s[(i + k) % n] - s[(j + k) % n];
        if (diff == 0)
            k++;
        else
        {
            if (diff > 0)
            {
                i = i + k + 1;
                if (i <= j)
                    i = j + 1;
            }
            else
            {
                j = j + k + 1;
                if (j <= i)
                    j = i + 1;
            }
            k = 0;
        }
    }
    return min(i, j);
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v1(n), v2(m);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];
    ll st = booth(v2);
    vector<ll> v3(m);
    for (int i = 0; i < m; i++)
    {
        v3[i] = v2[(st + i) % m];
    }
    for (int i = 0; i < n - m; i++)
    {
        if (v1[i] < v3[0])
            cout << v1[i] << " ";
        else
            cout << v3[0] << " ";
    }
    ll idx1 = n - m;
    ll idx2 = 0;
    bool flag = true;
    while (idx2 < m)
    {
        if (v1[idx1] < v3[idx2])
            break;
        else if (v1[idx1] > v3[idx2])
        {
            flag = false;
            break;
        }
        idx1++;
        idx2++;
    }
    if (flag)
    {
        for (int i = n - m; i < n; i++)
            cout << v1[i] << " ";
    }
    else
    {
        for (int i = 0; i < m; i++)
            cout << v3[i] << " ";
    }
    cout << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}