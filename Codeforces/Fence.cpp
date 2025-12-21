#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,k;cin>>n>>k;
    int a[n+1];
    long long b[n+1];
    b[0]=0;
    int i=1,j=1;
    vector <long long> c;
    for(;i<=k;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    c.push_back(b[i-1]);
    while(i<=n)
    {
        cin>>a[i];
        b[i]=a[i]+b[i-1];
        c.push_back(b[i]-b[j]);
        j++;
        i++;
    }
    cout<<((min_element(c.begin(),c.end())-c.begin())+1);
    
}