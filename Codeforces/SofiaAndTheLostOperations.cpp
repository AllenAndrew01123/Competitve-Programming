#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n,m;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cin>>m;
    vector<int> c(m);
    map<int,int> mp;
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
        mp[c[i]]++;
    }
    int last=c[m-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        continue;
        else
        {
            if(mp[b[i]]==0)
            {
                cout<<"NO"<<endl;
                return;
            }
            mp[b[i]]--;
        }
    }
    if(find(b.begin(),b.end(),last)!=b.end())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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