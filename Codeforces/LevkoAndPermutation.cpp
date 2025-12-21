#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    if (k == n)
    {
        cout << -1 << endl;
        return 0;
    }
    if (k == n - 1)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
        return 0;
    }
    ll arr[n + 1];
    arr[1] = n;
    arr[k + 2] = 1;
    for (int i = 2; i <= 1 + k; i++)
        arr[i] = i;
    for (int i = k + 3; i <= n; i++)
        arr[i] = i - 1;
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;
}