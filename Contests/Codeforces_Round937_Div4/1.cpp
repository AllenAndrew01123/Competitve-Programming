#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
    int a,b,c;cin>>a>>b>>c;
    if(a<b && b<c)
    cout<<"STAIR\n";
    else if(a<b && b>c)
    cout<<"PEAK\n";
    else
    cout<<"NONE\n";
    }

}