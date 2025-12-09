#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<double> a(n + 1,0.0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<ll> s(n+1);
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    sort(s.begin()+1, s.end(),greater<ll>());
    vector<double> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + s[i]*1.0;
    double best = 0.0L;
    for (int k = 1; k <= n; k++)
        best = max(best,(pref[k] + a[k]) /(k*1.0));
    cout <<fixed<< setprecision(6) << best << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
}
