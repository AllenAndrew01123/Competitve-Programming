#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> sieve(10000001,1);
void precalc()
{
    for (ll i = 2; i <= 10000000; i++)
    {
        if (sieve[i] != 1)
            continue;
        for (ll j = 2 * i; j <= 10000000; j += i)
            sieve[j] = i;
    }
}
pair<ll, ll> calc(ll n)
{
    set<ll> divi;
    ll p = 1;
    while (sieve[n] != 1)
    {
        divi.insert(sieve[n]);
        n /= sieve[n];
    }
    divi.insert(n);
    divi.erase(1);
    if (divi.size() <= 1)
    {
        return make_pair(-1, -1);
    }
    else
    {
        for(auto x:divi)
        p*=x;
    }
    ll d1=(*divi.begin());
    ll d2=p/d1;
    return make_pair(d1,d2);
}
int main()
{
    precalc();
    ll n;
    cin >> n;
    vector<pair<ll, ll>> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        ans[i] = calc(k);
        cout << ans[i].first << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i].second << " ";
}