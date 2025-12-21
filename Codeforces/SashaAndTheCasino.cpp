#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll k, x, a;
    cin >> k >> x >> a;
    ll maxloss=1;
    while (x>0)
    {
        // cout<<maxloss<<endl;
        ll y=maxloss/(k-1) +1;
        maxloss+=y;
        if(maxloss>a)
        {
            cout<<"NO\n";
            return;
        }
        x--;
    }
    // cout<<maxloss<<endl;
    cout << (maxloss <= a ? "YES" : "NO") << endl;
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