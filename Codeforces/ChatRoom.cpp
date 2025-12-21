#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    string h="hello";
    int i=0,j=0;
    while(i<s.length())
    {
        if(s[i]==h[j])
        {
            j++;
        }
        i++;
        
    }
    if(j==5)
    cout<<"YES";
    else
    cout<<"NO";
}