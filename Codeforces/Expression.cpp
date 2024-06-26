#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;cin>>a>>b>>c;
    cout<<max(a+b+c,max(max(a+b*c,a*(b+c)),max(a*b*c,(a+b)*c)));
}