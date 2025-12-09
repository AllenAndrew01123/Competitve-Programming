#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    v.reserve(n);
    for (int i = 1; i <= n / 2; i++)
        v.push_back(i);
    for (int i = n; i > n / 2; i--)
        v.push_back(i);
    vector<ll> score;
    score.reserve(n);
    for (int i = 0; i < n; i++)
        score.push_back(v[i] * (i + 1));
    cout << accumulate(score.begin(), score.end(), 0LL) - *max_element(score.begin(), score.end()) << endl;
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
    return 0;
}
