#include<bits/stdc++.h>
using namespace std;
#define mod 10000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    vector<string>v={""};
    while(n--)
    {
        ll s=v.size();
        for(int i=s-1;i>=0;i--)
            v.push_back(v[i]);
        s*=2;
        for(int i=0;i<s/2;i++)
        v[i].append("0");
        for(int i=s/2;i<s;i++)
        v[i].append("1");
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}