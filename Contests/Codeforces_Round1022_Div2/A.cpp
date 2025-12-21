#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll sum=0;
    ll temp=n-1;
    while(temp>=0)
    {
        sum+=temp;
        temp-=2;
    }
    cout<<sum+1<<endl;
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