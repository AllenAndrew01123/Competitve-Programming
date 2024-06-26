#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    int n;cin>>n;
    int i=2;
    for(;i*i<=n;i++)
    {
        if(n%i==0)
        {a=i;break;}

    }
    n/=a;
    i++;
    for(;i*i<=n;i++)
    {
        if(n%i==0 && n/i!=a &&n/i!=i)
        {
            cout<<"YES\n";
            cout<<a<<" "<<i<<" "<<n/i<<endl;
            return;
        }
    }
    cout<<"NO\n";
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