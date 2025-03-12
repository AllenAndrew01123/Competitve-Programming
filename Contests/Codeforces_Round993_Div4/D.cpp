#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    set<ll> s1,s2;
    for(int i=1;i<=n;i++)
    s2.insert(i);
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s2.erase(arr[i]);
        s1.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s1.find(arr[i])!=s1.end())
        {
            cout<<arr[i]<<" ";
            s1.erase(arr[i]);
        }
        else
        {
            cout<<*s2.begin()<<" ";
            s2.erase(*s2.begin());
        }
    }
    cout<<endl;
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