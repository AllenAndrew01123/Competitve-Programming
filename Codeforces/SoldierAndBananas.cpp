#include<bits/stdc++.h>
using namespace std;
main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int b=(w*(w+1)*k/2)-n;
    if(b<=0)
    cout<<"0";
    else cout<<b;
}
