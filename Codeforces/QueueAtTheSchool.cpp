#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    
    int i=0,j=0;
    while(i<t)
    {
        j=0;
        while(j<s.length())
        {
             if(s[j]=='B' && s[j+1]=='G')
           {
            swap(s[j],s[j+1]);
            j+=2;
           }
           else
           {
            j+=1;
           }
        }
        i++;
    }
    cout<<s;

}
