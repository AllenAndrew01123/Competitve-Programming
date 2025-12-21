#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;cin>>n;
    ll a[n];
    vector<ll> b(n-1);
    ll btemp[n-2];
    vector<ll> a1,a2,a3;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        b[i]=__gcd(a[i],a[i+1]);
    }
    if((is_sorted(b.begin(),b.end()-1))||(is_sorted(b.begin()+1,b.end())))
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=1;i<n-1;i++)
    {
        if(b[i-1]<=b[i])
        continue;
        else
        {
            int idx=i;
            for(int j=0;j<n;j++)
            {
                if(j!=idx-1)
                a1.push_back(a[j]);
            }
            for(int j=0;j<n;j++)
            {
                if(j!=idx)
                a2.push_back(a[j]);
            }
            for(int j=0;j<n;j++)
            {
                if(j!=idx+1)
                a3.push_back(a[j]);
            }
        break;

        }
    }
    for(int i=0;i<n-2;i++)
    {
        btemp[i]=__gcd(a1[i],a1[i+1]);
    }
    if(is_sorted(btemp,btemp+n-2))
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n-2;i++)
    {
        btemp[i]=__gcd(a2[i],a2[i+1]);
    }
    if(is_sorted(btemp,btemp+n-2))
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n-2;i++)
    {
        btemp[i]=__gcd(a3[i],a3[i+1]);
    }
    if(is_sorted(btemp,btemp+n-2))
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
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