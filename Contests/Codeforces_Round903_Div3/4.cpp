#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;cin>>n;
    int temp=n;
    map<int,int>mp;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            continue;
        }
        for(int i=2;i*i<=x;i++)
        {
            while(x%i==0)
            {
                x/=i;
                mp[i]++;
            }
        }
        if(x>1)
        mp[x]++;
    }
    for(auto x:mp)
    {
        if(x.second%temp==0)
        continue;
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
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