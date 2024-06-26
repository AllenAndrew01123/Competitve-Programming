#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    if (a == b)
        cout << "yes\n"
             << 1 << " " << 1;
    else
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                break;
        }
        for (j = n - 1; j >= 0; j--)
        {
            if (a[j] != b[j])
                break;
        }
        reverse(a.begin() + i, a.begin() + j + 1);
        if (a == b)
            cout << "yes\n"
                 << i + 1 << " " << j + 1;
        else
            cout << "no\n";
    }
}