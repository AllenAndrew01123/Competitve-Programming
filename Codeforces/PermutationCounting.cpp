#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a.begin()+1, a.end());
    ll cnt=1;
    for(int i=1;i<n;i++)
    {
        if(k>=(a[i+1]-a[i])*cnt)
        {
            k-=(a[i+1]-a[i])*cnt;
            cnt++;
        }
        else
        break;
    }
    cout<<(a[cnt]+k/cnt)*n+(n-cnt)+k%cnt-(n-1)<<endl;
   
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