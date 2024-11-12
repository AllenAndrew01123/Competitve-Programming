#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    string s;
    cin >> s;
    vector<ll> visited(n + 1, 0);
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        ll cnt = 0;
        set<ll> st;
        int j = i;
        while (!visited[j])
        {
            st.insert(j);
            visited[j] = 1;
            if (s[j - 1] == '0')
                cnt++;
            j = arr[j];
        }
        for (auto x : st)
        {
            mp[x] = cnt;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << mp[i] << " ";
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