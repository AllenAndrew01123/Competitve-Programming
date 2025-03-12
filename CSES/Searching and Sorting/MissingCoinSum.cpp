#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    ll x=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        break;
        x+=arr[i];
    }
    cout<<x<<endl;
}