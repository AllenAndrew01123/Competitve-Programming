#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <unordered_set>
#include <vector>
#include <stack>
#include <sstream>
#include <deque>
using namespace std;
typedef long long ll;
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll>arr(n),cost(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cin >> cost[i];
    ll total=accumulate(cost.begin(),cost.end(),0LL);
    vector<ll> dp(n, 0);
    //dp[i]= max saved cost if i keep arr[i] unchanged
    for (int i = 0; i < n; i++)
    {
        dp[i]=cost[i];
        for(int j=0;j<i;j++)
        {
            if(arr[j]<=arr[i])
            dp[i]=max(dp[i],dp[j]+cost[i]);
        }
    }
    cout << total-*max_element(dp.begin(),dp.end()) << endl;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    cin.tie(0)->sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
