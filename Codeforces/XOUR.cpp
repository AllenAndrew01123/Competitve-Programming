#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    map<int, priority_queue<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        a[i]=y/4;
        mp[y/4].push(-y);
    }
    for (int i = 0; i < n; i++)
    {
       cout<<-mp[a[i]].top()<<" ";
       mp[a[i]].pop();
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