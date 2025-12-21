#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1=s1+s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s3.compare(s1)==0)
    cout<<"YES";
    else
    cout<<"NO";
}