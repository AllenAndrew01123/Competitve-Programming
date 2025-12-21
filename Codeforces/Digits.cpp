#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, d;
    cin >> n >> d;
    set<ll> ans;
    ans.insert(1);
    if ((d % 3 == 0) || (n > 2))
        ans.insert(3);
    if (d == 5)
        ans.insert(5);
    if ((d == 7) || (n > 2))
        ans.insert(7);
    if (((d == 9) || (n > 5))||((d==3)&&(n>2))||((d==6)&&(n>2)))
        ans.insert(9);
    for (auto x : ans)
        cout << x << " ";
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