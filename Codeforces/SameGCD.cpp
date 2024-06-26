#include<bits/stdc++.h>
using namespace std;
bool checkprime(long long m)
{
    long long i=2;
    while(i*i<=m)
    {
        if(m%i==0)
        return false;
        i++;
    }
    return true;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        long long a,m;cin>>a>>m;
        long long g=__gcd(a,m);
        if(g==a)
        {
            cout<<1<<endl;
            continue;
        }
        else if(g==1 && checkprime(m))
        {
           cout<<m-1<<endl;
        }
        else
        {
            long long diff=m-a;
            cout<<(diff+g)/g<<endl;
        }
    }
}