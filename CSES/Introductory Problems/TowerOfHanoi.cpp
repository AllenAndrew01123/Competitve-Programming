#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<pair<ll, ll>> ans;
void towerofhanoi(ll a, ll b, ll c, ll n)
{
    if (n == 0)
        return;
    if (n == 1)
    {
        ans.push_back(make_pair(a, c));
        return;
    }
    towerofhanoi(a,c,b,n-1);
    ans.push_back(make_pair(a, c));
    towerofhanoi(b,a,c,n-1);
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    towerofhanoi(1, 2, 3, n);
    cout << ans.size()<<endl;
    for (auto x : ans)
        cout << x.first << " " << x.second << endl;
}