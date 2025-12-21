#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll l=1,r=2;
    ll sum=a[l];
    ll cnt=0;
    while(l<=n && r<=n)
    {
        sum+=a[r];
        if(sum==0)
        {
            cnt++;
            l++;
            r++;
            sum=a[l];
        }
        else
        {
            r++;
        }
    }
    while(l<=n)
    {
        
    }
    cout<<cnt<<endl;

}