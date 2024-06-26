#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, m, k, i,c=0;
    cin >> n >> m >> k;
    int a[m + 1];
    for (; i <= m; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        if (__builtin_popcount(a[i] ^ a[m]) <= k)
            c++;
    cout << c;
}
