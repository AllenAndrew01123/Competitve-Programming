#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll arr[n];
    ll cnt0=0;
    ll cnt1=0;
    ll cnt3=0;
    ll cnt2=0;
    ll cnt5=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        ll x=arr[i];
        if(x==0)
        cnt0++;
        else if(x==1)
        cnt1++;
        else if(x==2)
        cnt2++;
        else if(x==3)
        cnt3++;
        else if(x==5)
        cnt5++;
        if((cnt0>=3)&&(cnt1>=1)&&(cnt3>=1)&&(cnt2>=2)&&(cnt5>=1))
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<0<<endl;
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