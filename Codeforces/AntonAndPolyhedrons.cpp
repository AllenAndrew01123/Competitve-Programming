#include<bits/stdc++.h>
using namespace std;
main()
{
   int n,c=0;
   cin>>n;
   string s;
   while(cin>>s)
   {
    if(s[0]=='T') c=c+4;
    if(s[0]=='C') c=c+6;
    if(s[0]=='O') c=c+8;
    if(s[0]=='D') c=c+12;
    if(s[0]=='I') c=c+20;

   }
   cout<<c;

}