#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + arr[i];
    if(pref[n]%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ans = 0;
    vector<ll>s1,s2;
    for(int i=1;i<=n-2;i++)
    {
        if(pref[i]==pref[n]/3)
        s1.push_back(i);
    }
    for(int i=n-1;i>=2;i--)
    {
        if(pref[n]-pref[i]==pref[n]/3)
        s2.push_back(i);
    }
    sort(s2.begin(),s2.end());
    for(auto x:s1)
    {
        ans+=s2.end()-upper_bound(s2.begin(),s2.end(),x);
    }
    cout << ans << endl;

}