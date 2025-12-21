#include<bits/stdc++.h>
using namespace std;

main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int yr;
   cin>>yr;
   int i=yr+1;
   while(1)
   {
      int temp=i;
      int a=temp%10;
      temp/=10;
      int b=temp%10;
      temp/=10;
      int c=temp%10;
      temp/=10;
      if(a!=b && a!=c && a!=temp && b!=c && b!=temp && c!=temp)
      {
        cout<<i;
        break;
      }
      i++;
   }

}