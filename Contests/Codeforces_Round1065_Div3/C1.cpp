#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll arr1[n],arr2[n];
    ll cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        cnt1^=arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
        cnt2^=arr2[i];
    }
    if(cnt1==cnt2)
    {
        cout<<"Tie\n";
        return;
    }
    ll lstidx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr1[i]!=arr2[i])
        lstidx=i;
    }
    if(lstidx%2==0)
    {
        cout<<"Ajisai\n";
        return;
    }
    cout<<"Mai\n";
    return;
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