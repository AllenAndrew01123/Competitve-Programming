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
    ll n, a, b;
    cin >> n >> a >> b;
    if (a + b > n)
    {
        cout << "NO\n";
        return;
    }
    ll draws = n - a - b;
    vector<ll> a1(n), a2(n);
    for (int i = 0; i < n; i++)
    {
        a1[i] = i + 1;
        a2[i] = i + 1;
    }
    if ((a == 0 && b != 0) || (b == 0 && a != 0))
    {
        cout << "NO\n";
        return;
    }
    rotate(a2.begin(), a2.begin() + b, a2.begin() + a + b);
    cout << "YES\n";
    for (int i = 0; i < n; i++)
        cout << a2[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << a1[i] << " ";
    cout<<endl;
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
