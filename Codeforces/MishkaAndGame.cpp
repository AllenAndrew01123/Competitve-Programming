#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    int s=0,d=0;
    while(n--)
    {
        int a,b;cin>>a>>b;
        if(a>b)
        s++;
        else if(b>a)
        d++;
    }
    if(s>d)
    cout<<"Mishka";
    else if(d>s)
    cout<<"Chris";
    else
    cout<<"Friendship is magic!^^";
    
}