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
    vector<ll> arr(7);
    vector<ll> pref(7);
    cin >> arr[0];
    pref[0] = arr[0];
    for (int i = 1; i < 7; i++)
    {
        cin >> arr[i];
        pref[i] = pref[i - 1] + arr[i];
    }
    while (n >= pref[6])
        n -= pref[6];
    if(n==0)
    {
        ll idx=6;
        while(arr[idx]==0)
        idx--;
        cout<<idx+1<<endl;
        return;
    }
    cout<<lower_bound(pref.begin(),pref.end(),n)-pref.begin()+1<<endl;
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
