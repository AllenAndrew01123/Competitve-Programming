#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    long long a[n + 1];
    long long pref[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = a[i] + pref[i - 1];
    }
    long long cnt=0;

}