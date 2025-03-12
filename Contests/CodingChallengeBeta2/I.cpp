#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
const int N=20000000;
ll arr[N+1];
ll digi(int n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans++;
        n /= 10;
    }
    return ans;
}
void calc()
{
    for (int i = 1; i <= N; i++)
    {
        arr[i] = arr[i - 1] + i * (digi(i));
        // cout<<arr[i]<<endl;
    }
}
void solve()
{
    ll k;
    cin >> k;
    ll x = *lower_bound(arr, arr + N+1, k);
    int lmt = lower_bound(arr, arr + N+1, k) - arr;
    string s = to_string(lmt);
    int excess = (k - arr[lmt - 1]) % s.length();
    if (excess == 0)
        cout << s[s.length() - 1] << endl;
    else
        cout << s[excess % s.length() - 1] << endl;
}
int main()
{
    calc();
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}