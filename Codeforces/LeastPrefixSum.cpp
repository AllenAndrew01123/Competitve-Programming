#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    ll sum = 0;
    ll flips = 0;
    priority_queue<ll>pq1,pq2;
    for (int i = m; i >= 2; i--)
    {
        sum += arr[i];
        pq1.push(arr[i]);
        if (sum > 0)
        {
            flips++;
            sum -= 2 * (pq1.top());
            pq1.pop();
        }
    }
    sum = 0;
    for (int i = m + 1; i <= n; i++)
    {
        sum+=arr[i];
        pq2.push(-arr[i]);
        if(sum<0)
        {
            flips++;
            sum+=2*(pq2.top());
            pq2.pop();
        }
    }
    cout<<flips<<endl;
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