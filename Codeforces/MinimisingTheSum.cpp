#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    int k;
    cin >> k;
    long long a[n + 1];
    long long pref[n + 1];
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = a[i] + pref[i - 1];
    }
    long long mn = pref[n];
    int pos=0;
    for (int i = 0, j = k + 1; j <= n; i++, j++)
    {
        if (mn >= pref[j] - pref[i])
        {
            mn = (pref[j] - pref[i]);
            pos = i;
        }
    }
    if(pos==0)
    cout<<mn<<endl;
    else
    cout << mn + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}