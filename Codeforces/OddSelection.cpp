#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int i, o = 0, a;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2)
                o++;
        }
        if (o >= 1 && !(x == n && o % 2 == 0) && !(o == n && x % 2 == 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}