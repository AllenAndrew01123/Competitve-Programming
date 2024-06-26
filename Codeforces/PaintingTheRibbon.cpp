#include <bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if(n==m && m==1)
        cout<<"NO\n";
        else if (n-ceil(n*1.0/m*1.0)>k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}