#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;
    cout<<n/2<<endl;
    while(n>0)
    {
     if(n%2==0)
     {
        cout<<"2 ";
        n-=2;
     }
     else
     {
        cout<<"3 ";
        n-=3;
     }
    }
}