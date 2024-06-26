#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,g=1;
    string s;
    cin>>n;
    cin>>s;
    char c=s[0];
    string m;
    while(cin>>m)
    {
        if(m[0]!=c)
        {
            g++;
            c=m[0];
        }

    }
    cout<<g;
}