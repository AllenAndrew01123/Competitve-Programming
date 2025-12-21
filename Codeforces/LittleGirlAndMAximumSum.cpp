#include<bits/stdc++.h>
using namespace std;
long long pref[2000005];
int main()
{
    int n,q;cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int l,r;cin>>l>>r;
        pref[l-1]++,pref[r]--;
    }
    for(int i=1;i<=n;i++)
    {
        pref[i]+=pref[i-1];
    }
    sort(a,a+n);
    sort(pref,pref+n+1);
    long long ans=0;
    for(int i=0;i<n;i++)
    ans+=a[i]*pref[i+1];
    cout<<ans;
}