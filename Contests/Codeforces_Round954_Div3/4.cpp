#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll mn = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = s;
        string s1 = s.substr(i, 2);
        int x = stoi(s1);
        temp.erase(i, 2);
        ll prod = x;
        for (int i = 0; i < n - 2; i++)
        {
            prod = min(prod*(temp[i]-48),prod+(temp[i]-48));
        }
        mn=min(mn,prod);
    }
    cout<<mn<<endl;
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