#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    long long c,d;cin>>c>>d;
    int i=0;
    long long a[n*n];
    long long min=LLONG_MAX;
    while(i<n*n)
    {
        cin>>a[i];
        if(a[i]<min)
        min=a[i];
        i++;
    }
    vector <int> b;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b.push_back(min+j*d);
        }
        min+=c;
    }
    sort(a,a+n*n);
    sort(b.begin(),b.end());
    i=0;
    while(i<n*n)
    {
        // cout<<a[i]<<" "<<b[i];
        if(a[i]!=b[i])
        {
            cout<<"NO\n";
            return;
        }
        i++;
    }
    cout<<"YES\n";
    return;

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