#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if ((b - 1)*1LL * a != a)
            {
                cout << a << " " << (b - 1)*1LL * a << " " << a*1LL * b;
                cout << endl;
            }
            else
                cout << a << " " << 2 * a << " " << 3 * a << endl;
        }
    }
}