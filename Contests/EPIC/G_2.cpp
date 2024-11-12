#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.length();
    map<int, int> prefix_count;
    prefix_count[0] = 1;
    int current_mask = 0;
    int ans = 0;
    
    for (char ch : s) {
        current_mask ^= 1 << (ch - 'a');
        
        // Check the current mask itself
        if (__builtin_popcount(current_mask) <= k) {
            ans += prefix_count[current_mask];
        }
        
        // Check masks with one bit flipped
        for (int i = 0; i < 8; ++i) {
            int flipped_mask = current_mask ^ (1 << i);
            if (__builtin_popcount(flipped_mask) <= k) {
                ans += prefix_count[flipped_mask];
            }
        }
        
        prefix_count[current_mask]++;
    }
    
    cout << ans;
    return 0;
}