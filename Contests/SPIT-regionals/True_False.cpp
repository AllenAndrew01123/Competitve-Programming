#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(2, 0);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int x = 0;
        for(char c : s) if(c == '1') x ^= 1;
        a[x]++;
    }
    cout << (1ll * a[0] * a[1]) << '\n';
}