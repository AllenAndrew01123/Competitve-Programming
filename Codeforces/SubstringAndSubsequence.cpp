#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    string a,b;cin>>a>>b;
    int n=a.size();
    int m=b.size();
    int result=n+m;
    int mx=INT_MIN;
    for(int i=0;i<m;i++)
    {
        int it=i;
        for(int j=0;j<n && it<m;j++)
        {
            if(b[it]==a[j])
            it++;
        }
        mx=max(mx,it-i);
    }
    cout<<result-mx<<endl;
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