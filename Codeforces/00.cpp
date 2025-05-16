#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    for(int i=4;i<=10000;i++)
    {
        string s=to_string(i*i);
        if(s[0]=='1'&&s[1]=='1')
        cout<<s<<endl;
    }

}
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}