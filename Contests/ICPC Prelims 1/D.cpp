#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

vector<ll> dp(4000000 + 1, 0);

void countUniqueWays(const vector<ll> &A)
{
    dp[0] = 1;

    for (int i = 0; i < A.size(); i++)
    {
        for (int sum = A[i]; sum <= 4000000; sum++)
        {
            dp[sum] = (dp[sum] % MOD + dp[sum - A[i]] % MOD) % MOD;
        }
    }
}

int main()
{
    int X = 4000000;

    vector<ll> coins;
    for (ll j = 4, i = 1; j*i <= 4000000; j *= 2, i++)
    {
        coins.push_back(j * i);
    }
    countUniqueWays(coins);
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        cout << dp[x] << '\n';
    }
    return 0;
}