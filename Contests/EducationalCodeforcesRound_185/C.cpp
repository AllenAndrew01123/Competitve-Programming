#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    priority_queue<ll> pq;
    ll cnt=0;
    vector<ll> rem(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    for (int i = 0; i < n; i++)
        cin >> rem[i];
    sort(rem.begin(),rem.end());
    ll idx=0;
    while(!pq.empty())
    {
        if(pq.top()*(rem[idx]+1)+rem[idx]<=k)
        {
            idx++;
            cnt++;
        }
        pq.pop();
    }
    cout<<cnt<<endl;
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
