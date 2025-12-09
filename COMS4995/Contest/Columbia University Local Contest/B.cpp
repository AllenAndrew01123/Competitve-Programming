#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll num11 = stoi(s1.substr(0, 2));
    ll num12 = stoi(s1.substr(3, 2));
    ll num21 = stoi(s2.substr(0, 2));
    ll num22 = stoi(s2.substr(3, 2));
    ll ans = 0;
    while (num11 * 100 + num12 <= num21 * 100 + num22)
    {
        string temp = to_string(num11 * 100 + num12);
        if (num11 == 0)
            temp = "00" + temp;
        else if (num11 < 10)
            temp = '0' + temp;
        string temp2 = temp;
        reverse(temp.begin(), temp.end());
        if (temp2 == temp)
        {
            // cout << temp2 << endl;
            ans++;
        }
        num12++;
        if (num12 == 60)
        {
            num11++;
            num12 = 0;
        }
    }
    cout << ans << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}