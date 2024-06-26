#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long a,b;
    long long n;cin>>n;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(__gcd(i,n/i)==1)
            {
                a=i;
                b=n/i;
            }
        }

    }
    cout<<a<<" "<<b;
}