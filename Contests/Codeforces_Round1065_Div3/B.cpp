#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if(arr[0]==-1 && arr[n-1]==-1)
    {
        arr[0]=0;
        arr[n-1]=0;
    }
    else if(arr[0]==-1)
    {
        arr[0]=arr[n-1];
    }
    else if(arr[n-1]==-1)
    {
        arr[n-1]=arr[0];
    }
    cout<<abs(arr[n-1]-arr[0])<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
        cout<<0<<" ";
        else
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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