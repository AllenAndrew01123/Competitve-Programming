#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binpow(ll a, ll b, ll mod)
{
    if (a == 1 || b == 0)
        return 1;
    ll x = binpow(a, b / 2, mod);
    if (b & 1)
        return ((((x % mod) * (x % mod)) % mod) * (a % mod)) % mod;
    else
        return (((x % mod) * (x % mod)) % mod) % mod;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        char ch, op1, op2;
        ll a, b, c, p;
        string tmp;
        cin >> ch                  // '('
            >> a >> op1            // '+' or '-' or '*' or '/'
            >> b >> op2 >> c >> ch // ')'
            >> tmp                 // "mod"
            >> p;

        // helper that applies an operator mod p
        auto apply = [&](ll x, char op, ll y)
        {
            if (op == '+')
                return (x + y) % p;
            if (op == '-')
                return (x - y + p) % p;
            if (op == '*')
                return (x * y) % p;
            // op == '/'
            return (x * binpow(y, p - 2, p)) % p;
        };

        // decide precedence
        bool secondTighter = (op2 == '*' || op2 == '/') && (op1 == '+' || op1 == '-');

        ll mid, result;
        if (secondTighter)
        {
            // do b op2 c first
            mid = apply(b, op2, c);
            result = apply(a, op1, mid);
        }
        else
        {
            // do a op1 b first
            mid = apply(a, op1, b);
            result = apply(mid, op2, c);
        }

        cout << (result+p)%p << "\n";
    }
}
