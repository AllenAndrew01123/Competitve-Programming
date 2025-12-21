#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;cin>>n>>m;
    ll arr[n+2];
    ll idx[n+2];
    arr[0]=0;
    arr[n+1]=n+1;
    idx[0]=0;
    idx[n+1]=n+1;
    for(int i=1;i<=n;i++)
    {
        ll x;cin>>x;
        arr[x]=i;
        idx[i]=x;
    }
    ll c=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        c++;
    }
    while(m--)
    {
        ll a,b;cin>>a>>b;
        ll contri1=0;
        if(arr[idx[a]-1]>arr[idx[a]])
        contri1++;
        if(arr[idx[a]]>arr[idx[a]+1])
        contri1++;
        if(arr[idx[b]-1]>arr[idx[b]])
        contri1++;
        if(arr[idx[b]]>arr[idx[b]+1])
        contri1++;
        if((abs(idx[a]-idx[b])==1)&&(arr[min(idx[a],idx[b])]>arr[max(idx[a],idx[b])]))
        contri1--;
        swap(arr[idx[a]],arr[idx[b]]);
        swap(idx[a],idx[b]);
        if(arr[idx[a]-1]>arr[idx[a]])
        contri1--;
        if(arr[idx[a]]>arr[idx[a]+1])
        contri1--;
        if(arr[idx[b]-1]>arr[idx[b]])
        contri1--;
        if(arr[idx[b]]>arr[idx[b]+1])
        contri1--;
        if((abs(idx[a]-idx[b])==1)&&(arr[min(idx[a],idx[b])]>arr[max(idx[a],idx[b])]))
        contri1++;
        c-=contri1;
        cout<<c<<endl;
    }
}