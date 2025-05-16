#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll arr[n];
    ll bit[21] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 20; j >= 0; j--)
        {
            if (((arr[i]) >> j) & 1)
                bit[j]++;
        }
    }
    ll sum = 0;
    while (n--)
    {
        ll x = 0;
        for (int j = 20; j >= 0; j--)
        {
            if (bit[j])
            {
                x += (1 << j);
                bit[j]--;
            }
        }
        sum+=x*x;
    }
    cout<<sum<<endl;
}