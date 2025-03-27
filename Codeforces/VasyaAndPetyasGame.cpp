#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout <<"0\n";
        return 0;
    }
    vector<ll> primes;
    vector<int> v(1001, 1);
    for (int i = 2; i <= 1000; i++)
    {
        if (v[i])
        {
            primes.push_back(i);
            for (int j = i; j <= 1000; j += i)
            {
                v[j] = 0;
            }
        }
    }
    vector<ll> ans;
    for (auto x : primes)
    {
        for(int j=x;j<=n;j*=x)
        ans.push_back(j);
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
}