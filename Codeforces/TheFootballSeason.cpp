#include <bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, p, w, d;
    cin >> n >> p >> w >> d;
    if (p == 0)
    {
        cout << 0 << " " << 0 << " " << n << endl;
        return 0;
    }
    for (ll i = 0; i <= w - 1; i++)
    {
        if((p-i*d)>=0 && (p-i*d)%w==0 && (p-i*d)/w+i<=n)
        {
            cout<<(p-i*d)/w<<" "<<i<<" "<<n-(p-i*d)/w-i<<endl;
            return 0;
        }
    }
    cout << -1 << endl;
}