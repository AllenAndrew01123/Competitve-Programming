#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n < 3)
    {
        cout << 0 << endl;
        for (int x : a)
        {
            cout << x << " ";
        }
        return 0;
    }
    sort(a, a + n);
    int lower[n / 2];
    int upper[n - n / 2];
    for (int i = 0; i < n / 2; i++)
    {
        lower[i] = a[i];
    }
    for (int i = n / 2; i < n; i++)
    {
        upper[i - n / 2] = a[i];
    }
    for (int i = 0, j = 0; i < n - 1; i += 2, j++)
    {
        a[i] = upper[j];
        a[i + 1] = lower[j];
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i += 2)
    {
        if (a[i - 1] > a[i] && a[i] < a[i + 1])
            cnt++;
    }
    cout << cnt << endl;
    for (int x : a)
    {
        cout << x << " ";
    }
}