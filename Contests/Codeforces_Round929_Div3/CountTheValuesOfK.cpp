#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int a,b,l;
      int i,j,k=1,m=0;
      cin>>a>>b>>l;
      int arr[10000];
      // int ax=log(l)/log(a);
      // int bx=log(l)/log(b);
      set <int> ans;
      for(i=0;i<=50;i++)
      {
        for(j=0;j<=50;j++)
        {
            long long p=long ((pow(a,i))*(pow(b,j)));
            if(l%p==0)
            { 
                ans.insert(l/p);
                
            }
        }
      }
      cout<<ans.size()<<"\n";
    }

}
