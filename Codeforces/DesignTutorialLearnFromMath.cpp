#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    if(n%2==0)
    cout<<"4 "<<n-4;
    else
    cout<<n-9<<" 9";
}