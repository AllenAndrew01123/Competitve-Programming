#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll low, high;
    for (int i = 30; i >= 0; i--)
    {
        char x;
        cout << "? " << (1 << i) << " " << (1 << (i - 1)) << endl;
        cin >> x;
        if (x == 'y')
        {
            high = 1 << i;
            low = 1 << (i - 1);
        }
        double eps = 1e-9; // set the error limit here
        while (high - low > eps)
        {
            ll m1 = low + (high - low) / 3;
            ll m2 = high - (high - low) / 3;
            char x;
            cout << "? " << m2<< " " << m1<< endl;
            cin >> x;
            if (x=='x')
                r = m1;
            else
                 = m2;
        }
        return f(l); // return the maximum of f(x) in [l, r]
    }
}
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    while (true)
    {
        string s;
        cin >> s;
        if (s == "start")
        {
            solve();
        }
        else
            return 0;
    }
}