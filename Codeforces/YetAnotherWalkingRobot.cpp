#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;;cin>>n;
    map<pair<int,int>,vector<ll>>mp;
    int currow=0,curcol=0;
    mp[{0,0}].push_back(0);
    for(int i=1;i<=n;i++)
    {
        char c;cin>>c;
        if(c=='L')
        {
            currow--;
        }
        else if(c=='R')
        {
            currow++;
        }
        else if(c=='U')
        {
            curcol++;
        }
        else
        {
            curcol--;
        }
        mp[{currow,curcol}].push_back(i);
    }
    ll mn=LLONG_MAX;
    ll idx1,idx2;
    for(auto x:mp)
    {
        if(x.second.size()==1)
        continue;
        else
        {
            for(int i=0;i<x.second.size()-1;i++)
            {
                if(mn>x.second[i+1]-x.second[i])
                {
                    idx1=x.second[i];
                    idx2=x.second[i+1];
                    mn=x.second[i+1]-x.second[i];
                }
            }
        }
    }
    if(mn==LLONG_MAX)
    cout<<-1<<endl;
    else
    cout<<idx1+1<<" "<<idx2<<endl;

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