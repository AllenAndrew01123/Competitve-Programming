#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<pair<long long, long long>> v(n);
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    sort(v.begin(), v.end());
    long long ans = 0;
    long long sum = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        if (v[r].first - v[l].first < d)
        {
            sum += v[r].second;
            r++;
            continue;
        }
        ans = max(ans, sum);
        sum -= v[l].second;
        l++;
        if (l > r)
        {
            r++;
            sum = 0;
        }
    }
    ans = max(ans, sum);

    cout << ans;
}