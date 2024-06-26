#include<bits/stdc++.h>
using namespace std;
main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   if(s.length()%2!=0)
   {
    if(s[s.length()/2]=='A')
    cout<<"Anton";
    else 
    cout<<"Danik";
   }
   else
   {
    if(s[s.length()/2]=='A')
    cout<<"Anton";
    else if (s[(s.length()/2)-1]=='D' )
    cout<<"Danik";
    else
    cout<<"Friendship";
   }
}