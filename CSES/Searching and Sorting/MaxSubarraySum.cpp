#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll currsum=0,maxsum=LLONG_MIN;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        currsum=max(currsum+arr[i],arr[i]);
        maxsum=max(maxsum,currsum);
    }
    cout<<maxsum<<endl;
}