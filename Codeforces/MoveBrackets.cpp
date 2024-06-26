#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        int tmp = 0;
        for(char& x : s) {
            if(x == '(') ++tmp;
            else {
                --tmp;
                if(tmp < 0) cnt = min(cnt, tmp);
            }
        }
        cout << abs(cnt) << '\n';
    }
}