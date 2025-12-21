#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    vector<ll> left(m), right(m);
    ll j = 0;
    for (ll i = 0; i < n; ++i) {
        if (j < m && s1[i] == s2[j]) {
            left[j] = i;
            j++;
        }
    }
    j = m - 1;
    for (ll i = n - 1; i >= 0; --i) {
        if (j >= 0 && s1[i] == s2[j]) {
            right[j] = i;
            j--;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < m - 1; ++i) {
        ans = max(ans, right[i + 1] - left[i]);
    }
    cout << ans << endl;
    return 0;
}