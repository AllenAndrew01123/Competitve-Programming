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
    map<ll,ll>mp;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll ans=0;
    ll left=0,right=0;
    while(right<n)
    {
        mp[arr[right]]++;
        while(mp.size()!=right-left+1)
        {
            if(!--mp[arr[left]])
            mp.erase(arr[left]);
            left++;
        }
        ans+=right-left+1;
        right++;
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
