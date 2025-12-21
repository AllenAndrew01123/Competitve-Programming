#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll phi(ll n) {
    ll result = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
void solve()
{
    ll a,m;cin>>a>>m;
    ll g=__gcd(a,m);
    ll a_=a/g;
    ll m_=m/g;
    cout<<phi(m_)<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}