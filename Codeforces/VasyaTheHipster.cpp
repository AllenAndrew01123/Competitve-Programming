#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;cin>>a>>b;
    if(a>=b)
    cout<<b<<" "<<(a-b)/2;
    else
    cout<<a<<" "<<(b-a)/2;
}