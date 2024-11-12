#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool checkPrime(ll n)
{
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    if(n%2==0)
    {
        if(n==2)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
    else
    {
        ll x=n,y=n-2;
        bool flag1=checkPrime(x);
        bool flag2=checkPrime(y);
        if(flag1)
        cout<<1<<endl;
        else if(flag2)
        cout<<2<<endl;
        else
        cout<<3<<endl;
    }

}