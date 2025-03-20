#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    string s1 = '0' + a + '0';
    string s2 = '0' + b + '0';
    vector<pair<ll, ll>> ans;
    for (int i = 1; i <= n;)
    {
        if (s1[i] == s2[i])
            i++;
        else
        {
            for (int j = i+1; j <= n+1; j++)
            {
                if (s1[j] == s2[j])
                {
                    ans.push_back(make_pair(i, j - 1));
                    i=j;
                    break;
                }
            }

        }
    }
    cout << ans.size() << endl;
    for(auto x:ans)
    {
        cout<<1<<" "<<x.first<<" "<<x.second<<endl;
    }
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