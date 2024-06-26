#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define repr(i, n) for (int i = (n) - 1; i >= 0; i--)

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int n; cin >> n;
  double ans = 0;
  vector<double> a(n); rep(i, n) cin >> a[i], ans += 1 / a[i];
  cout << fixed << setprecision(15) << 1/ans << endl;
}