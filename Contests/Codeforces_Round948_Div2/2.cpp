#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> v, ans;
    for (int i = log2(n) + 1; i >= 0; i--)
    {
        if ((n >> i) & 1)
            v.push_back(1);
        else
            v.push_back(0);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1 and i + 1 < v.size() and v[i + 1] == 1)
        {
            v[i] = -1;
            int j = i + 1;
            while (j < v.size() and v[j] == 1)
            {
                v[j] = 0;
                j++;
            }
            v[j] = 1;
            i = j - 1;
        }
    }
    cout << v.size() << endl;
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
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