#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<pair<double, double>> v(n);
    double mxspeed = LLONG_MAX;
    double mnspeed = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        double a, b;
        cin >> a >> b;
        if (a != 0)
            mxspeed = min((i + 1) / a, mxspeed);
        mnspeed = max(mnspeed, (i + 1) / b);
        // cout<<mnspeed<<" "<<mxspeed<<endl;
    }
    if (mxspeed < mnspeed)
        cout << -1 << endl;
    else
        cout << mnspeed << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("subsonic_subway_input.txt", "r", stdin);
    freopen("file_name.out", "w", stdout);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
}