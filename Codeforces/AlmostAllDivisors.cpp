#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans=a[0]*a[n-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]*a[n-1-i]!=ans)
        {
            cout<<-1<<endl;
            return;
        }
    }
    set<ll> s;
    for(ll i=2;i*i<=ans;i++)
    {
        if(ans%i==0)
        {
            s.insert(i);
            s.insert(ans/i);
        }
    }
    // cout<<n<<" "<<s.size()<<endl;
    if(n==s.size())
    cout<<ans<<endl;
    else
    cout<<-1<<endl;
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