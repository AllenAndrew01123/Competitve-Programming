#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    int i=0;
    while(i<s.length())
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES";
            break;
        }
        i++;
    }
    if(i==s.length())
        cout<<"NO";
}