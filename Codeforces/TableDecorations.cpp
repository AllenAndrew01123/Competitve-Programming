#include <bits/stdc++.h>
using namespace std;
int main()
{
    // long long a[3];
    // cin >> a[0] >> a[1] >> a[2];
    // sort(a, a + 3);
    // long long ans = a[0];
    // if(a[0]==a[1] && a[1]==a[2])
    // {
    //     cout<<ans;
    //     return 0;
    // }
    // else if(a[0]==a[1]&&a[0]+a[1]==a[2])
    // {
    //     cout<<ans+ans/3;
    //     return 0;
    // }
    // else if(a[0]==a[1]&& a[2]-a[0]>=a[0]/3)
    // {
    //     cout<<ans+ans/9;
    //     return 0;
    // }
    // else if (a[0] + a[1] > a[2])
    // {
    //     a[1] -= a[0];
    //     a[2] -= a[0];
    //     a[0] = 0;
    // }
    // else
    // {
    //     a[2] -= 2 * a[0];
    //     a[0] = 0;
    // }

    // // if (a[1] == 0)
    // //     cout << ans;
    //     if (a[2] >= 2 * a[1])
    //         cout << ans + a[1];
    //     else
    //     {
    //         long long a1 = a[1] / 3;
    //         long long a2 = a[2] / 3;
    //         ans = ans + a1 + a2;
    //         a[1] = a[1] - a1 * 3;
    //         a[2] = a[2] - a2 * 3;
    //         if (a[1] + a[2] >= 3)
    //             ans++;
    //         cout << ans;
    //     }
    long long r,g,b;cin>>r>>g>>b;
    cout<<min((r+g+b)/3,min(r+g,min(b+g,b+r)));
}