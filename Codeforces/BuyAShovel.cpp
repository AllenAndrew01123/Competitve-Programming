#include<bits/stdc++.h>
using namespace std;
main()
{
    int k,r;cin>>k>>r;
    int n=1;
    int temp=k;
    while(true)
    {
       if(k%10==r||k%10==0)
       {
        cout<<n;
        break;
       }
       n++;
       k+=temp;
    }
}