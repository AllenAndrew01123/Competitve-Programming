#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    ll lc=1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        lc=lc*a[i]/__gcd(lc,a[i]);
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        a[i]=lc/a[i];
        sum+=a[i];
    }
    if(sum>=lc)
    {
        cout<<-1;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}