#include<bits/stdc++.h>
using namespace std;

void nll(int n)
{
  if(n==0)
  {
    cout<<"NO";
    return;
  }
  while(n>0)
  {
    if(n%10==4 || n%10==7)
    n/=10;
    else
    {
        cout<<"NO";
        return;
    }
    cout<<"YES";
  }
}
int main()
{
   long long n;
   cin>>n;
   int c=0;
   while(n>0)
   {
    if(n%10==4 || n%10==7)
    c++;
    n/=10;
   }
   nll(c);
   return 0;

}
