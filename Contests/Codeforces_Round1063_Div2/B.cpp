#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void update(vector<ll>&arr,vector<ll> &ans,ll left,ll right)
{
    ll mn=min(arr[left],arr[right]);
    ll mx=max(arr[left],arr[right]);
    for(int i=left+1;i<right;i++)
    {
        if(mn<arr[i] && arr[i]<mx)
        ans[i]=1;
    }
}
void solve()
{
    ll n;cin>>n;
    vector<ll>arr(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    vector<ll>ans(n,0);
    string x;cin>>x;
    if(x[0]=='1' || x[n-1]=='1' || x[mp[1]]=='1' || x[mp[n]]=='1')
    {
        cout<<-1<<endl;
        return;
    }
    ll l1=mp[1];
    ll r1=mp[n];
    if(l1>r1)
    swap(l1,r1);
    update(arr,ans,l1,r1);
    update(arr,ans,0,l1);
    update(arr,ans,0,r1);
    update(arr,ans,l1,n-1);
    update(arr,ans,r1,n-1);
    for(int i=0;i<n;i++)
    {
        if(x[i]=='1' && ans[i]==0)
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<5<<endl;
    cout<<l1+1<<" "<<r1+1<<endl;
    cout<<1<<" "<<l1+1<<endl;
    cout<<1<<" "<<r1+1<<endl;
    cout<<l1+1<<" "<<n<<endl;
    cout<<r1+1<<" "<<n<<endl;
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