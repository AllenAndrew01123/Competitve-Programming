#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=a[0];
    int ma=INT_MAX;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=x)
        {
            ma=min(c,ma);
            c=0;
        }
        else
        {
            c++;
        }
        // cout<<c<<" "<<ma<<endl;
    }
    if(ma==INT_MAX)
    cout<<-1<<endl;
    else
    cout<<min(c,ma)<<endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}