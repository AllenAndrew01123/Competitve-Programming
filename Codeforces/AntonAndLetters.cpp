#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    if(s.length()==2)
    cout<<0;
    else if(s.length()==3)
    cout<<1;
    else
    cout<<s.length()-4;

}