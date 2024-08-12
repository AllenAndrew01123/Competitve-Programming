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
    for(ll i=0;i<=pow(2,9);i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(((a[j]&b[k])|i)==i)
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==n)
        {
            cout<<i<<endl;
            break;
        }
    }

}