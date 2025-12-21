#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> odd;
    vector<int> even;
    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            odd.push_back(i);
        else
            even.push_back(i);
    }
    swap(even[0],even[1]);
    reverse(odd.begin(),odd.end());
    for(int x:odd)
    {
        cout<<x<<" ";
    }
    for(int x:even)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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