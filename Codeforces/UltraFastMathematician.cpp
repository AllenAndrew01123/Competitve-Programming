#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    int i=0;
    while(i<a.length())
    {
       cout<<((a[i]-'0')^(b[i]-'0'));
       i++;

    }
    
}