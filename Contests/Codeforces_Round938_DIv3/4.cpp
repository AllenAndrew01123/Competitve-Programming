#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int i = 0;
    int a[n];
    map<int, int> mpa, mpb;
    int cnt = 0, ans = 0;
    while (i < n)
    {
        cin >> a[i];
        i++;
    }
    i = 0;
    while (i < m)
    {
        int x;
        cin >> x;
        mpb[x]++;
        i++;
    }
    for (i = 0; i < m; i++)
    {
        if (mpa[a[i]] < mpb[a[i]]) // ensures element and frequency
            cnt++;
        mpa[a[i]]++;
    }
    if (cnt >= k)
        ans++;
    for (; i < n; i++)
    {
        if (mpa[a[i - m]] <= mpb[a[i - m]])
        {
            cnt--;
        }
        mpa[a[i - m]]--;
        if (mpa[a[i]] < mpb[a[i]])
            cnt++;
        mpa[a[i]]++;
        if (cnt >= k)
            ans++;
        
    }
    cout << ans << endl;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}