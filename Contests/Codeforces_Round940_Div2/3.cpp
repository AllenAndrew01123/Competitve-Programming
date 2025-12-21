#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
void solve()
{
  int n, k;
  cin >> n >> k;
  while(k--)
  {
    int x,y;cin>>x>>y;
    if(x==y)
    n-=1;
    else
    n-=2;
  }
  if(n<=2)
  {
    if(n==0)
    cout<<1<<endl;
    else if(n==1)
    cout<<1<<endl;
    else
    cout<<3<<endl;
    return;
  }
  vector<long long> dp(n + 1,0);
  dp[0] = 1, dp[1] = 1, dp[2] = 3;
  for (int i = 3; i <= n; i++)
  {
    dp[i] = (dp[i - 1]+ (2*(i-1)*dp[i-2])%mod)%mod;
  }
  cout << dp[n] << '\n';
}

int main()
{
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
