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
    ll arr[n];
    ll ans = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll mx=LLONG_MAX;
    for(int i=n-1;i>=0;i--)
    {
        ll x=min(arr[i],mx);
        ans+=x;
        mx=max(x-1,0LL);
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while (t--)
    {
        solve();
    }
}
