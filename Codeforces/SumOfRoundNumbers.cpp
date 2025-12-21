#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int place=0;
      int temp=n;
      int count=0;
      int ans=0;
      while(temp>0)
      {
        if(temp%10!=0)
        ans++;
        temp/=10;
      }
      cout<<ans<<"\n";
      while(n>0)
      {
        if(n%10!=0)
        cout<<(n%10)*pow(10,place)<<" ";
        place++;
        n/=10;
      }
      cout<<endl;


    }
}