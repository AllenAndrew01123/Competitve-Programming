#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll l, r;
    cin >> l >> r;
    if (r - l >= 2018)
        cout << 0 << endl;
    else
    {
        ll mn=LLONG_MAX;
        for (int i=l;i<=r;i++)
        {
            for(int j=i+1;j<=r;j++)
            {
                mn=min(mn,(ll)((i%2019)*(j%2019))%2019);
            }
        }
        cout<<mn<<endl;
    }
}