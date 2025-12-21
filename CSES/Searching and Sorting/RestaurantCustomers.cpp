#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> st(n), en(n);
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
        cin >> en[i];
    }
    sort(st.begin(), st.end());
    sort(en.begin(), en.end());
    ll ans = 0, c = 0;
    for (int idx1 = 0, idx2 = 0; idx1 < n;)
    {
        if (st[idx1] < en[idx2])
        {
            c++;
            idx1++;
        }
        else
        {
            ans = max(ans, c);
            c--;
            idx2++;
        }
    }
    ans = max(ans, c);
    cout << ans << endl;
}