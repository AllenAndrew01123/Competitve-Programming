#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s.length() & 1 ||(count(s.begin(),s.end(),'0')!=s.length()/2))
    {
        cout << -1 << endl;
        return;
    }
    ll left = 0, right = s.length() - 1;
    vector<ll> ans;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            left++;
            right--;
        }
        else
        {
            if (s[left] == '0')
            {
                ans.push_back(right + 1);
                s.insert(right+1,"01");
                left++;
                right++;
            }
            else
            {
                ans.push_back(left);
                s.insert(left,"01");
                left++;
                right++;
            }
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}