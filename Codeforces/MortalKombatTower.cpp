#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,sum=0;
    cin >> n ;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=a[0];
    for(int i=1;i<n;i++)
    {
        if (a[i])
            sum++;
        else
            ans = ans + (sum / 3), sum = 0;
    }
    cout << ans + (sum / 3) << "\n";
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