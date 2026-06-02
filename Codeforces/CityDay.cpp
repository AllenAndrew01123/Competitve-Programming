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
bool before(const vector<ll>&v,ll idx,ll x)
{
    for(int i=max(0LL,idx-x);i<idx;i++)
    {
        if(v[i]<=v[idx])
        return false;
    }
    return true;
}
bool after(const vector<ll>&v,ll idx,ll y)
{
    for(int i=idx+1;i<min((ll)v.size(),idx+y+1);i++)
    {
        if(v[i]<=v[idx])
        return false;
    }
    return true;
}
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for(int i=0;i<n;i++)
    {
        if(before(v,i,x) && after(v,i,y))
        {
            cout<<i+1<<endl;
            return;
        }
    }
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
