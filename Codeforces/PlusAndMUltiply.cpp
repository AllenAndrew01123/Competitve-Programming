#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
        return;
    }
    else
    {
        vector<int> po;
        long long i = 1;
        for (; i <= n; i *= a)
        {
            po.push_back(i);
        }
        for(i=0;i<po.size();i++)
        {
            if(po[i]%b==n%b)
            {
                cout<<"Yes\n";
                return;
            }
        }
        cout<<"No\n";
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}