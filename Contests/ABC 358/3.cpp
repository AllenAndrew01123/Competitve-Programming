#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve(){
    int n,m;
    cin >> n >> m;
    vector<string> a(n);
    vector<int> w(n);
    for(int i = 0;i < n;i++)cin >> a[i];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j] == 'o')w[i] |= 1 << j;
        }
    }
    int res = n;
    for(int i = 0;i < 1 << n;i++){
        int t = 0;
        for(int j = 0;j < n;j++){
            if(i >> j & 1){
                t |= w[j];
            }
        }
        if(t == (1 << m) - 1){
            res = min(res,__builtin_popcount(i));
        }
    }
    cout << res << endl;
}   
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}