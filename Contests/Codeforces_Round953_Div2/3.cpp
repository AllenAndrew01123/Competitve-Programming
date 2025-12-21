#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll temp=n;
    if (k & 1)
    {
        cout << "No" << endl;
        return;
    }
    vector<ll> a(n), b(n);
    ll maxscore = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
        b[i] = n - i;
        maxscore += abs(b[i] - a[i]);
    }
    if (k > maxscore)
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    ll ind = 0;
    while ((k) > (temp - 1) * 2)
    {
        swap(a[ind], a[n - ind - 1]);
        k -= (temp - 1) * 2;
        temp -= 2;
        ind++;
    }
    swap(a[ind],a[ind+k/2]);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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