#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int m;
    string s="EASY";
    while(cin>>m)
    {
      if (m==1)
      s="HARD";
    }
    cout<<s;
}