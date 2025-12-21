#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    ll pref[n + 1];
    pref[0] = 0;
    set<ll> s;
    s.insert(0);
    ll cnt=0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = arr[i] + pref[i - 1];
        if(s.find(pref[i])!=s.end())
        {
            cnt++;
            pref[i]=0;
            s.clear();
            s.insert(0);
        }
        else
        {
            s.insert(pref[i]);
        }
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