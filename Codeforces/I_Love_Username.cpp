#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int m;
    cin>>m;
    int max=m;
    int min=m;
    int c=0;
    while(cin>>m)
    {
        if(m>max)
        {c++;max=m;}
        if(m<min)
        {c++;min=m;}
    }
    cout<<c;
}