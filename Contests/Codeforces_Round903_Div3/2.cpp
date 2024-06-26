#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    if (a[0] == a[2])
    {
        cout << "YES" << endl;
        return;
    }
    if(a[1]%a[0]==0 && a[2]%a[0]==0 && a[1]+a[2]<=5*a[0])
    {
        cout << "YES" << endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
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