#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m < (n-1) || m > 2 * (n + 1))
    {
        cout << "-1\n";
        return;
    }
    if (m > 2 * n)
    {
        if(m==2*n+1)
        cout<<1;
        else
        cout<<11;
        for (int i = 1; i <= n; i++)
            cout << "011";
        cout << endl;
        return;
    }
    if(m==n-1)
    {
        for(int i=1;i<=m;i++)
        cout<<"01";
        cout<<0<<endl;
        return;
    }
    vector<ll> v(n, 1);
    ll temp = m-n;
    while (temp > 0)
    {
        for (int i = 0; i < n; i++)
        {
            v[i]++;
            temp--;
            if (temp == 0)
                break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<0;
        while(v[i]--)
        cout<<1;
    }
    cout<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}