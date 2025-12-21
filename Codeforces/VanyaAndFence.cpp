#include<bits/stdc++.h>
using namespace std;
main()
{
  int n,k,m;
  cin>>n>>k;
  int width=0;
  while (cin>>m)
  {
    if(m>k)
    width+=2;
    else
    width+=1;
  }
  cout<<width;
} 

