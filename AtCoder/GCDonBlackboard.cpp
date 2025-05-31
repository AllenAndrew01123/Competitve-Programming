#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll arr[n + 1];
    map<ll, vector<ll>> mp;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    ll prefgcd[n + 1], suffgcd[n + 2];
    prefgcd[0] = 0;
    suffgcd[n + 1] = 0;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
        prefgcd[i] = __gcd(prefgcd[i - 1], arr[i]);
    for (int i = n; i >= 1; i--)
        suffgcd[i] = __gcd(suffgcd[i + 1], arr[i]);
    for (int i = 1; i <= n; i++)
        ans = max(ans, __gcd(prefgcd[i - 1], suffgcd[i + 1]));
    cout << ans << endl;
}