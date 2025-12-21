#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            continue;
        }
        else
        cnt++;
    }
    cnt++;
    // cout<<cnt<<endl;
    if(cnt==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(cnt==2)
    {
        if(a[n-1]<=a[0])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        return;
    }
    if(cnt>=2)
    {
        cout<<"NO"<<endl;
        return;
    }
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