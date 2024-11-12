#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll cnt = 0;
    for (int i = 0; i + 1 < n; i += 2)
    {
        if (arr[i] != arr[i + 1])
            cnt++;
    }
    if (cnt & 1)
        cout << "HL\n";
    else
        cout << "T\n";
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}