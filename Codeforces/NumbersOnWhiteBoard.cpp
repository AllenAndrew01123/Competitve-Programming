#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;cin>>n;
    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;
    int temp=n;
    for(int i=1;i<=temp-2;i++)
    {
        cout<<n<<" "<<n-2<<endl;
        n--;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);int t;cin>>t;
    while(t--)
    {
        solve();
    }
}