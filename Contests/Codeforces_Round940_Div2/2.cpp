#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    long long i=1;
    if(n==1)
    {
        cout<<k<<endl;
        return;
    }
    int al=0,pw=1;
    while(al+pw<=k)
    {
        al+=pw;
        pw*=2;
    }
    cout<<al<<" "<<k-al<<" ";
    n-=2;
    while(n--)
    cout<<0<<" ";
    cout<<endl;

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