#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,x;cin>>n>>x;
    long long a[n];
    int i=0;
    while(i<n)
    {
        cin>>a[i];
        i++;
    }
    sort(a,a+n);
    long long sum=0;
    i=0;
    int c=0;
    while(sum<=x && c<=n)
    {
        sum+=a[i];
        i++;
        c++;
    }
    cout<<c-1<<endl;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
    
}