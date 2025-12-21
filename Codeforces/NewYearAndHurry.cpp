#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int i=0;
    while((5*(i)*(i+1)/2)<=(240-k) && i<=n)
    {
        i++;
    }
    cout<<i-1;
}