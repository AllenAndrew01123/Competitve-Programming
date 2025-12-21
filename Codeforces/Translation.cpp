#include<bits/stdc++.h>
using namespace std;
main()
{
  string s,t;
  cin>>s>>t;
  reverse(t.begin(),t.end());
  if(s.compare(t)==0)
  {
    cout<<"YES";
  }  
  else
  cout<<"NO";
} 
