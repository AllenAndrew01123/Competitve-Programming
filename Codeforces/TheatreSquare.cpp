#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    double n,m,a;cin>>n>>m>>a;
    long long ans=(ceil(n/a)*ceil(m/a));
    cout<<ans;
}