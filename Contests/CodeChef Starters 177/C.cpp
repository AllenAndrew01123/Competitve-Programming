#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    for (int i = 0; i < n; i++)
    {
        ll elem = arr[i];
        set<pair<ll, ll>> s;
        for (int j = 0; j < n; j++)
            s.insert(make_pair(abs(elem - arr[j]), arr[j]));
        ll idx = 0;
        for (auto x : s)
        {
            if (x.second == arr2[idx])
            {
                idx++;
                continue;
            }
            else
                break;
        }
        if (idx ==n)
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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