#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a,b,n,cnt=0;cin>>a>>b>>n;
    if(a>=b)
    swap(a,b);
    while(b<=n)
    {
        a+=b;
        swap(a,b);
        cnt++;
    }
    cout<<cnt<<endl;
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