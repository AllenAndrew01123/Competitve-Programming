#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    double n,p;cin>>n>>p;
    p/=100;
    double ans=pow(p,(n-1)/n);
    cout<<setprecision(10)<<(ans-p)*100;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("line_by_line_input.txt", "r", stdin);
    freopen("file_name.out", "w", stdout);
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
    }
}