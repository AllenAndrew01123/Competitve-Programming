#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,w;cin>>n>>w;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    ll l=0,r=n-1,c=0;
    while(l<r)
    {
        if(arr[l]+arr[r]<=w)
        {
            c++;
            l++;
            r--;
        }
        else
        {
            c++;
            r--;
        }
    }
    if(l==r)
    c++;
    cout<<c<<endl;

}