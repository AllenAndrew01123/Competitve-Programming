#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> prime;
void calc()
{
 prime.push_back(1);
 for(int i=2;i<=200000;i++)
 {
    ll cnt=0;
    for(int j=2;j*j<=i;j++)
    {
        if(i%j==0)
        cnt++;
    }
    if(cnt==0)
    prime.push_back(i);
 }
}
void solve()
{
    ll d;cin>>d;
    ll fn=(*lower_bound(prime.begin(),prime.end(),1+d));
    ll sn=(*lower_bound(prime.begin(),prime.end(),fn+d));
    cout<<fn*sn<<endl;
}
int main()
{
    calc();
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}