#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<ll> ans(n + 1, -1);
    stack<ll> st;
    for (int i = n; i >= 1; i--)
    {
        if (st.empty())
        {
            st.push(i);
            continue;
        }
        else
        {
            while (!st.empty() && v[st.top()] <= v[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = st.top();
            }
            st.push(i);
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        cout << ans[x] << endl;
    }
    return 0;
}
