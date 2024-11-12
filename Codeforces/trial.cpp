#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    int lb = max(l, L);
    int ub = min(r, R);
    int cnt = 0;
    if(lb>ub)
    {
        cnt=1;
    }
    else {
        cnt = (ub - lb);
        if(lb != min({l, L, r, R})) {
          ++cnt;
        }
        if(ub != max({l, L, r, R})) {
          ++cnt;
        }
    }
    cout << cnt << '\n';
 }
}