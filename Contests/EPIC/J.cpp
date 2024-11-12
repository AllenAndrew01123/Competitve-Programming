#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool checkPrime(ll n)
{
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
    if(n==1 || n==3)
    {
        cout<<"Vasya"<<endl;
        return 0;
    }
    if(n%2==0)
    {
        if(n==2)
        cout<<"Vasya"<<endl;
        else
        cout<<"Petya"<<endl;
        return 0;
    }
    else
    {
        if(checkPrime(n))
        cout<<"Vasya"<<endl;
        else
        cout<<"Petya"<<endl;
        return 0;
    }
}