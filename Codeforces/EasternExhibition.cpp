#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> x(n);
    vector<ll> y(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    // ans is basically number of points b/w middle element, in case of odd ek element toh ans 1 ,
    //  even mein 2 element so check all values between the 2 middle elements
    if(n&1)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        cout<<(x[n/2]-x[n/2-1]+1)*(y[n/2]-y[n/2-1]+1)<<endl;
        return;
    }

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
