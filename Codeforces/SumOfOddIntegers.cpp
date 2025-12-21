#include <bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n >= k*k && n%2==k%2)
        {
            cout << "YES\n";
        }
        else 
        {
            cout<<"NO\n";
        }
    }
}