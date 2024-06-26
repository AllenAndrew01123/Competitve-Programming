#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(int n)
{
    map<int, int> mp;
    set <int> b;
    int i = 0, a,ma=0,ele;
    for (; i < n; i++)
    {
        cin >> a;
        b.insert(a);
        mp[a]++;
        if(mp[a]>ma)
        {
            ma=mp[a];
            ele=a;
        }
    }
    int y=b.size();
    cout<<max(min(y-1,ma),min(y,ma-1))<<endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}