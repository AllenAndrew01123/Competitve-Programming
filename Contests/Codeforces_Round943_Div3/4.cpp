#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<long long> a(n+1), p(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<long long> bcyc,scyc;
    vector <bool> bodya(n+1,false), sasha(n+1,false);
    while (bodya[pb]==false)
    {
        bcyc.push_back(a[pb]);
        bodya[pb] = true;
        pb = p[pb];
    }
    while (sasha[ps]==false)
    {
        scyc.push_back(a[ps]);
        sasha[ps] = true;
        ps = p[ps];
    }
    long long s1 = 0, s2 = 0, cs1 = 0, cs2 = 0;
    long long min1=min((long long)bcyc.size(),k);
    long long min2=min((long long)scyc.size(),k);
    for (int i = 0; i < min1; i++)
    {
        s1 = max(s1, cs1 + bcyc[i] * (k - i));
        cs1 += bcyc[i];
    }
    for (int i = 0; i < min2; i++)
    {
        s2 = max(s2, cs2 + scyc[i] * (k - i));
        cs2 += scyc[i];
    }
    if(s1>s2)
    cout<<"Bodya\n";
    else if(s1<s2)
    cout<<"Sasha\n";
    else
    cout<<"Draw\n";
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