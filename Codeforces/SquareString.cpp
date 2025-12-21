#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define F(i,a,b) for(int i=a;i<b;i=i+2)
main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        if(s.length()%2!=0)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
           int j=s.length()/2;
           int i=0;
           for(;j<s.length();j++)
           {
            if(s[i]!=s[j])
            {
                cout<<"NO\n";
                break;
            }
            i++;
           }
           if(j==s.length())
           cout<<"YES\n";
           
        }
        
    }
}