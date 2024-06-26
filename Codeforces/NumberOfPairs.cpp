#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, lower, upper;
    cin >> n >> lower >> upper;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int ans1=0;
    for(int i=0;i<n-1;i++)
    {
        ans1+=(upper_bound(a+i+1,a+n,upper-a[i])-lower_bound(a+i+1,a+n,lower-a[i]));
    }
    
    cout<<ans1<<endl;

}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}