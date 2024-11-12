#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(k+1,0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[x]++;
    }
    for (int i = 1; i < k; i++)
    {
        if (arr[i] % (i + 1) == 0)
        {
            arr[i + 1] += arr[i] / (i + 1);
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}