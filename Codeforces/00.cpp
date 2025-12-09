#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll best12(const string &s) {
    const int k = 12;              // length of number we want
    int n = (int)s.size();
    string st;
    st.reserve(k);

    for (int i = 0; i < n; i++) {
        char d = s[i];

        // While last chosen digit is smaller than current, and
        // we can still end up with k digits total, pop it.
        while (!st.empty() && st.back() < d &&
               (int)st.size() - 1 + (n - i) >= k) {
            st.pop_back();
        }

        // If we still don't have k digits, take this one
        if ((int)st.size() < k) {
            st.push_back(d);
        }
    }

    // Assuming the problem guarantees at least 12 digits in each line.
    // If not, you might want to handle st.size() < k differently.
    return stoll(st);
}

void solve()
{
    string s;
    ll ans = 0;

    while (cin >> s)
    {
        ll mx = best12(s);
        ans += mx;
    }

    cout << ans << '\n';
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
