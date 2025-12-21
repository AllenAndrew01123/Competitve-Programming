#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll ans=0;
    vector<vector<ll>>v(10,vector<ll>(10,0));
    for(int i=1;i<=n;i++)
    {
        string s=to_string(i);
        v[s[0]-48][s[s.length()-1]-48]++;
    }
    for(int i=1;i<=9;i++)
    {
        for(int j=i;j<=9;j++)
        {
            if(i==j)
            ans+=v[i][j]*v[i][j];
            else
            ans+=2*v[i][j]*v[j][i];
        }
    }
    cout<<ans<<endl;
    
}