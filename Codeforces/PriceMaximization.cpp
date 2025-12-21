#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i]/k;
        v[i]%=k;
    }
    sort(v.begin(), v.end());
    int l=0,r=n-1;
    while(l<r)
    {
        if(v[l]+v[r]<k)
        l++;
        else
        {
            sum+=(v[l]+v[r])/k;
            l++;
            r--;
        }

    }
    cout<<sum<<endl;
    
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