#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n + 1];
    int b[n + 1];
    b[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int y;
        cin >> y;
        cout << lower_bound(b, b + n + 1, y)-b<<endl;
    }
}