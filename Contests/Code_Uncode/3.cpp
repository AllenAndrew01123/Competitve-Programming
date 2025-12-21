#include <bits/stdc++.h>
using namespace std;
int findmex(vector<int> b, int l, int r)
{
    int i = 0;
    while (true)
    {
        // cout<<i<<endl;
        if (find(b.begin()+l, b.begin()+r, i) == b.begin()+r)
            return i;
        i++;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    int p = INT_MAX;
    int i = 0;
    while (i < n)
    {
        cin >> b[i];
        i++;
    }
    int mex = findmex(b,0,n);
    // cout<<mex<<endl;
    if (mex <= 1)
    {
        cout << 1 << endl;
        return;
    }
    if (mex == n)
    {
        cout << mex << endl;
        return;
    }
    int l, r;
    int limit = mex;
    r=limit;
    while (r < n)
    {
        for (l = 0; r < n; l++, r++)
        {
            // cout<<findmex(b, l, r)<<endl;
            if (findmex(b, l, r) == mex)
            {
                cout << r - l << endl;
                return;
            }
        }
        limit++;
        r=limit;
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
