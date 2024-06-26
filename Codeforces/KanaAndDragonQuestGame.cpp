#include <bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int h, n, m;
        cin >> h >> n >> m;
        int i=1;
        int temp=h;
        while(i<=n)
        {
            h=h/2+10;
            i++;
        }
        if(temp<h)
        h=temp;
        h=h-10*m;
        if(h>0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}