#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll arr[2*n];
    for(int i=0;i<2*n;i++)
    cin>>arr[i];
    sort(arr,arr+2*n);
    multiset<ll>s;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(i!=j)
            s.insert(arr[j]);
        }
        ll xi=arr[i]+arr[2*n-1];
        ll x=arr[2*n-1];
        vector<pair<ll,ll>>ans;
        ans.push_back(make_pair(arr[2*n-1],arr[i]));
        bool flag=true;
        while(!s.empty()&&flag)
        {
            ll elem=*s.rbegin();
            if(*s.lower_bound(x-elem)==x-elem && (s.lower_bound(x-elem)!=(--s.end()))) 
            {
                ans.push_back(make_pair(elem,x-elem));
                s.erase(s.lower_bound(elem));
                s.erase(s.lower_bound(x-elem));
                x=elem;
            }
            else
            flag=false;
        }
        if(flag)
        {
            cout<<"YES\n";
            cout<<xi<<endl;
            for(auto d:ans)
            cout<<d.first<<" "<<d.second<<endl;
            return;
        }
        s.clear();
    }
    cout<<"NO\n";
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