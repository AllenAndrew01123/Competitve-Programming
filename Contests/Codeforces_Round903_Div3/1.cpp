#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n,m;
    string s1, s2;
    cin >> n >> m >> s1 >> s2;
    int a = -1;
    for (int i = 0; i <= 10; i++)
    {
        if (s1.find(s2) != -1)
        {
            a = i;
            break;
        }
        s1.append(s1);
    }
    cout << a << endl;
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