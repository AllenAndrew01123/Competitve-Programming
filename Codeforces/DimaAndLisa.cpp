#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool isPrime(ll n)
{
    for (ll j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
            return false;
    }
    return true;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1 << endl;
        cout << n << endl;
    }
    else if (isPrime(n - 2))
    {
        cout << 2 << endl;
        cout << 2 << " " << n - 2 << endl;
    }
    else
    {
        cout << 3 << endl;
        ll a,b;
        for(ll i=3;i<=n;i+=2)
        {
            if(isPrime(i) && isPrime(n-i-3))
            {
                cout<<3<<" "<<i<<" "<<n-i-3<<endl;
                return 0;
            }
        }
    }
}