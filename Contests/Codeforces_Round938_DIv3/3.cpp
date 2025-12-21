#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;cin>>n;
    long long k;cin>>k;
    long long a[n];
    long long i=0;
    double sum=0;
    while(i<n)
    {
        cin>>a[i];
        sum+=a[i];
        i++;
    }
    if(k>=sum)
    {
        cout<<n<<endl;
        return;
    }
    long long l=0,r=n-1;
    long long c=0;
    while(k>1)
    {
        if(l==r)
        {
            cout<<n-1<<endl;
            return;
        }
        long long p=min(a[l],min(a[r],k/2));
        a[l]-=p;
        a[r]-=p;
        k-=2*p;
        if(a[l]==0){l++;c++;}
        if(a[r]==0){r--;c++;}
    }
    if(k==a[l])
    cout<<c+1<<endl;
    else
    cout<<c<<endl;
    return;
    
    
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    
}