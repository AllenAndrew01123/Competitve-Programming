#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(5e6+1),pref(5e6 + 1);
void sieve()
{
    for(int i=1;i<=5e6;i++)
    spf[i]=i;
    for(int i=2;i<=5000000;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i;j<=5000000;j+=i)
            spf[j]=i;
        }
    }
}
void precal()
{
    for (int i = 2; i <= 5000000; i++)
    {
        ll n = i;
        ll cnt = 0;
        while(n>1)
        {
            cnt++;
            n/=spf[n];
        }
        pref[i]=pref[i-1]+cnt;
    }
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << pref[a] - pref[b] << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    sieve();
    precal();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
