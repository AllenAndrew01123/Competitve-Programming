#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll n = s.length();
    vector<int> prefix_count(1 << 8, 0);
    prefix_count[0] = 1;
    int current_mask = 0;
    int ans = 0;
    for (char ch : s)
    {
        current_mask ^= 1 << (ch - 'a');
        for (int i = 0; i < (1 << 8); ++i)
        {
            if (__builtin_popcount(i ^ current_mask) <= k)
            {
                ans += prefix_count[i];
            }
        }
        prefix_count[current_mask]++;
    }
    cout << ans;
    return 0;
}
