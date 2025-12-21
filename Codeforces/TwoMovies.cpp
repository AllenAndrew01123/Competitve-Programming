#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int a[n+1], b[n+1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    int fm=0,sm=0,x=0,y=0;
    for (int i = 1; i <= n; i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            fm+=a[i];
            else
            sm+=b[i];
        }
        else
        {
        if(a[i]==1)
            x++;
        else if(a[i]==-1)
            y++;
        }
    }
    while(x--)
    {
        if(fm<sm)
        fm++;
        else
        sm++;
    }
    while(y--)
    {
        if(fm<sm)
        sm--;
        else
        fm--;
    }
    cout<<min(fm,sm)<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}