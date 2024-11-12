#include <bits/stdc++.h>
using namespace std;
#define mod 100000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll idx=n/2;
    ll ans = n;
    for(int l=0;l<n/2 && idx<n;)
    {
        if(2*v[l]<=v[idx])
        {
            ans--;
            l++;
        }
        idx++;
    }
    cout<<ans<<endl;
}