#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
#define mod 1000000007
ll a[16]={0,1,2,1,2,1,1,2,2,2,1,2,2,2,3};
void solve()
{
    int n;
	cin>>n;
	int ans = n/15+a[n%15];
	if(n==5||n==8)ans = 3;
	cout<<ans<<endl;
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