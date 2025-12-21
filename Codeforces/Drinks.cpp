#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    float c=0,d;
    cin>>n;
    while(cin>>d)
    {
        c+=d;
    }
    cout<<c/n;
}