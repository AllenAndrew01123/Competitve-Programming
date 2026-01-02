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
    vector<vector<ll>> v(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++)
    {
        if (i %2== 0)
        {
            for (int row = 0; row < i; row++)
            {
                v[row][i] = row + i;
            }
            for (int col = 0; col < i; col++)
            {
                v[i][col] = col + i;
            }
        }
        else
        {
            for (int row = 0; row < i; row++)
            {
                v[row][i] = i-row;
            }
            for (int col = 0; col < i; col++)
            {
                v[i][col] = i-col;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    cin.tie(0)->sync_with_stdio(0);
    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
