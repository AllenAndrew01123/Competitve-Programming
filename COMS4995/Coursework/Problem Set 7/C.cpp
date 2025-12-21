#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> x(k);
    for (int i = 0; i < k; i++)
        cin >> x[i];
    sort(x.begin(), x.end(),greater<int>());
    ll cat = 0, saved = 0;
    for (int i = 0; i < k; i++)
    {
        if (cat < x[i])
        {
            saved++;
            cat += (n - x[i]);
        }
        else
            break;
    }
    cout << saved << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
