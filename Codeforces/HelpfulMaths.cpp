#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int a=0,b=0,c=0,i=0;
  while(i<s.length())
  {
    if(s[i]=='1')
    a++;
    else if (s[i]=='2')
    b++;
    else
    c++;

    i=i+2;
  }
  i=0;
  while(a!=0)
  {
     s[i]='1';
     i=i+2;
     a--;
  }
   while(b!=0)
  {
     s[i]='2';
     i=i+2;
     b--;
  }
   while(c!=0)
  {
     s[i]='3';
     i=i+2;
     c--;
  }
  cout<<s;
  return 0;
} 
// #include <bits/stdc++.h>
// using namespace std;
// int a[105],n,i=2;
// main()
// {
// while(cin>>a[n++]);
// sort(a,a+n);
// cout<<a[1];
// for(;i<n;i++) cout<<'+'<<a[i];}
