#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        if((a==1 && b==1 && c%2==0) || (a%2==0 && b==1 && c==1))
        cout<<"NO\n";
        else if(((2*b-c)>0&&(2*b-c)%a==0) || ((c-a)%2==0 && ((a+c)/2)%b==0) ||(2*b-a>0 && (2*b-a)%c==0))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}