#include<bits/stdc++.h>
using namespace std;
main()
{
  string s;
  cin>>s;
  string s1=s;
  sort(s1.begin(),s1.end());
  if(s1[s.length()/2]<=90)
  transform(s.begin(),s.end(),s.begin(),::toupper);
  else
  transform(s.begin(),s.end(),s.begin(),::tolower);
  cout<<s;

} 
