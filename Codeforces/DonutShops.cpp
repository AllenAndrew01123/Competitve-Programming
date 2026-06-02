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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < c)
        cout << 1 << " ";
    else
        cout << -1 << " ";
    if (c < a * b)
        cout << b << endl;
    else
        cout << -1 << endl;
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
