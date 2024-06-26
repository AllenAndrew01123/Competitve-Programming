#include<bits/stdc++.h>
using namespace std;
main()
{ 
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    if (s.length()==26)
    cout<<"YES";
    else
    cout<<"NO";


}