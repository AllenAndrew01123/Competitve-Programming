#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    if(s.find("1111111")!=std::string::npos||s.find("0000000")!=std::string::npos)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
