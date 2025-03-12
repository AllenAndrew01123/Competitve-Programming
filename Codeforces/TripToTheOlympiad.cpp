#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll l,r;cin>>l>>r;
    ll bit;
    ll excess=0;
    for(int i=31;i>=0;i--)
    {
        if(((r>>i)&1)&&(!((l>>i)&1)))
        {
            bit=i;
            break;
        }
        else
        {
            if((r>>i)&1)
            excess+=1<<i;
        }
        
    }
    ll a=(1<<bit);
    ll b=a-1;
    for(int i=l;i<=r;i++)
    {
        if((i!=a+excess)&&(i!=b+excess))
        {
            cout<<a+excess<<" "<<b+excess<<" "<<i<<endl;
            return;
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}