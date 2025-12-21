#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m,a,b;cin>>n>>m>>a>>b;
    int case1=n*a;
    int case2=n/m*b+n%m*a;
    int case3=n/m*b+b;
    if(n<=m)
    cout<<min(min(case1,case2),min(case3,b));
    else
    cout<<min(min(case1,case2),case3);
}