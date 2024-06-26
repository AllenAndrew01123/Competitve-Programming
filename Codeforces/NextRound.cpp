#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(i=a;i<b;i++)
int main()
{
   int n,k,i,c=0;
   cin>>n>>k;
   int a[n];
   F(i,0,n)
   {
    cin>>a[i];
   }
   F(i,0,n)
   {
    if(a[i]>=a[k-1] && a[i]!=0)
    c++;
    else
    break;
   }
   cout<<c;

}
