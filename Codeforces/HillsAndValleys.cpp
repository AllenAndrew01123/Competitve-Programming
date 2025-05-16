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
    ll v[n] = {0};
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            v[i] = 1;
        else if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            v[i] = 1;
    }
    ll sum = n - count(v, v + n, 0);
    ll mn = sum;
    for (int i = 1; i < n - 1; i++)
    {
        ll temp = arr[i];
        ll val = v[i - 1] + v[i] + v[i + 1];
        arr[i] = arr[i - 1];
        ll val1 = 0;
        if (i < n - 2)
        {
            if (arr[i+1] > arr[i] && arr[i+1] > arr[i + 2])
                val1++;
            else if (arr[i+1] < arr[i] && arr[i+1] < arr[i + 2])
                val1++;
        }
        mn=min(mn,sum-val+val1);
        arr[i] = arr[i + 1];
        val1 = 0;
        if (i > 1)
        {
            if (arr[i-1] > arr[i - 2] && arr[i-1] > arr[i])
                val1++;
            else if (arr[i-1] < arr[i - 2] && arr[i-1] < arr[i])
                val1++;
        }
        mn=min(mn,sum-val+val1);
        arr[i]=temp;
    }
    cout<<mn<<endl;
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