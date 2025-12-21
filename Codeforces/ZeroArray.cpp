#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n + 1];
    long long sum = 0;
    long long mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    if (mx <= sum-mx && sum%2==0)
        cout << "YES";
    else
        cout << "NO";
}