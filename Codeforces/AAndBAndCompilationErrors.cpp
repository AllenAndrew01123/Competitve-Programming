#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    int temp=n-1;
    int temp2=n-2;
    int x=0,z=0;
    while(n--)
    {
        int y;cin>>y;
        x^=y;
    }
    while(temp--)
    {
        int y;cin>>y;
        x^=y;
        z^=y;
    }
    cout<<x<<endl;
    while(temp2--)
    {
        int y;cin>>y;
        z^=y;
    }
    cout<<z;

}