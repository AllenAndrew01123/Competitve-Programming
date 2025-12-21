#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,c=0;
    cin>>n;
    int a,b;
    while(cin>>a>>b)
    {
        if (b-a>=2)
        c++;
    }
    cout<<c;

}