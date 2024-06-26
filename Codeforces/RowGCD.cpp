#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a,a+n);
    if(n==1)
    {
        for(int i=0;i<m;i++)
        {
            cout<<b[i]+a[0]<<" ";
        }
        return 0;
    }
    ll gcd=a[1]-a[0];
    for(int i=2;i<n;i++)
    {
        a[i]-=a[0];
        gcd=__gcd(a[i],gcd);
    }
    for(int i=0;i<m;i++)
    {
        cout<<__gcd(a[0]+b[i],gcd)<<" ";
    }
}