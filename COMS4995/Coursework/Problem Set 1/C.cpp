#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(m);
    priority_queue<ll> pq;
    for (int i = 0; i < m; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i < m; i++)
        pq.push(v[i] - v[i - 1]-1);
    pq.push(n - v[m - 1] + v[0]-1);
    ll ans=0;
    ll factor=0;
    while(!pq.empty())
    {
        if(pq.top()-factor>=1&&pq.top()-factor<=2)
        ans++;
        else if (pq.top()-factor>2)
        ans+=pq.top()-factor-1;
        factor+=4;
        pq.pop();
    }
    cout<<n-ans<<endl;
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