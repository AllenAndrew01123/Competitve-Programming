#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<double> coordinates(n), time(n);
    for (int i = 0; i < n; i++)
        cin >> coordinates[i];
    for (int i = 0; i < n; i++)
        cin >> time[i];
    double l=*max_element(time.begin(),time.end());
    double r=1e18;
    double ans;
    while(r-l>1e-7)
    {
        double mid=(r+l)/2.0;
        // cout<<mid<<endl;
        double mn=-1e18;
        double mx=+1e18;
        for(int i=0;i<n;i++)
        {
            double start=max(min(mid-time[i]+coordinates[i],coordinates[i]+time[i]-mid),0.0);
            double end=max(mid-time[i]+coordinates[i],coordinates[i]-time[i]+mid);
            mn=max(mn,start);
            mx=min(mx,end);
        }
        // cout<<mid<<" "<<mn<<" "<<mx<<endl;
        if(mn<=mx)
        {
            r=mid-1e-6;
            ans=(mx+mn)/2;
        }
        else
        {
            l=mid+1e-6;
        }
    }
    cout<<setprecision(7)<<ans<<endl;
    
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