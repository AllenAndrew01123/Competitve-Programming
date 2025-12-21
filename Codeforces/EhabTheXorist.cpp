#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll u,v;cin>>u>>v;
    if(u>v)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(u%2==0 && v%2!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(v%2==0 && u%2!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(u==0 && v==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(u==v)
    {
        cout<<1<<endl;
        cout<<u<<endl;
        return 0;
    }
    ll a=u;
    ll b=(v-u)/2;
    if(a&b)
    {
        cout<<3<<endl;
        cout<<a<<" "<<b<<" "<<b<<endl;
        return 0;
    }
    else
    {
        cout<<2<<endl;
        cout<<a+b<<" "<<b<<endl;
        return 0;
    }

}