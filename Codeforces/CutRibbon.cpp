#include <bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n, a, b, c, d = 0, e, i, j;
    cin >> n >> a >> b >> c;
    for (i = 0; i <= 4000; i++)
        for (j = 0; j <= 4000; j++)
        {
            e = n - a * i - b * j;
            if (e >= 0 && e % c == 0)
                d =max(d, i + j + e / c);
        }
    cout << d;
}