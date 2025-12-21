#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a,b;cin>>a>>b;
    int c=max(a,b);
    int num=7-c;
    int fact=__gcd(num,6);
    cout<<num/fact<<"/"<<6/fact;

}