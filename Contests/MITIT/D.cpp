#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
const ll LIM = 1000000000LL;
const ll CAP = LIM + 1; 
ll lcmcalc(ll a, ll b) {
    if (a >= CAP || b >= CAP) return CAP;
    ll g =__gcd(a, b);
    double val = (a / g) * b;
    if (val > LIM) return CAP;
    return (ll)val;
}
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll lcm[n], gcd[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    lcm[0] = arr[0];
    for (int i = 1; i < n; i++)
        lcm[i] = lcmcalc(lcm[i - 1], arr[i]);
    gcd[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        gcd[i]=__gcd(gcd[i+1],arr[i]);
    }
    if(gcd[1]%arr[0]==0)
    {
        cout<<gcd[1]<<endl;
        return;
    }
    if(arr[n-1]%lcm[n-2]==0)
    {
        cout<<arr[n-1]<<endl;
        return;
    }
    for(int i=1;i<=n-2;i++)
    {
        ll L = lcm[i];
        if (L >= CAP) continue;
        ll G = gcd[i + 1];
        if (G % L == 0) {
            cout << L << "\n";
            return;
        }
    }
    cout<<-1<<endl;
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
