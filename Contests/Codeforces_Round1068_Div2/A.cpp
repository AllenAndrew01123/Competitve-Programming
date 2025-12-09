#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    ll idx=-1;
    for (int i = 0; i < n;)
    {
        if (s[i] == '0')
        {
            if(idx==-1 || (i-idx>k))
            ans++;
            i++;
        }
        else
        {
            idx=i;
            i++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
