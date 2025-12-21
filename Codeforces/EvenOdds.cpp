#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k>n/2)
        {
            cout<<2*(k-n/2);
        }
        else
        {
            cout<<2*(k)-1;
        }
    }
    else
    {
        if(k>n/2+1)
        {
            cout<<2*(k-1-n/2);
        }
        else
        cout<<2*k-1;
    }
}