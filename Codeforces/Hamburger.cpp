#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    ll xb=0,xs=0,xc=0,nb,ns,nc,pb,ps,pc;
    ll ru;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    cin>>ru;
    for(char x:s)
    {
        if(x=='B')
        xb++;
        else if(x=='S')
        xs++;
        else
        xc++;
    }
    ll l=0,r=1e13;
    ll ans=0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        ll cost=0;
        if(xb!=0 && nb/xb<mid)
        cost+=(mid*xb-nb)*pb;
        if(xs!=0 && ns/xs<mid)
        cost+=(mid*xs-ns)*ps;
        if(xc!=0 && nc/xc<mid)
        cost+=(mid*xc-nc)*pc;
        if(ru-cost>=0)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}