#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;cin>>s;
    string temp=s;
    ll number=stoi(temp);
    if(s=="1")
    {
        cout<<9999<<endl;
        for(int i=2;i<=10000;i++)
        cout<<i<<" "<<i-1<<endl;
        return;
    }
    while(s.length()<=9)
    {
        s.append(temp);
    }
    vector<pair<ll,ll>> v;
    ll idx=1;
    while(idx<=9)
    {
        string num=s.substr(0,idx);
        ll n=stoi(num);
        if((n-idx)%(number-temp.length())==0)
        {
            ll a=(n-idx)/(number-temp.length());
            if(a>=1 && a<=10000 && (temp.length()*a-idx)>=1 && (temp.length()*a-idx)<=10000)
            v.push_back({a,temp.length()*a-idx});
        }
        idx++;
    }
    cout<<v.size()<<endl;
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >>t;
    while (t--)
    {
        solve();
    }
}