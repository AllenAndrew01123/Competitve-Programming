#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll c[n], s[n], f[n];
    for (int i = 0; i < n - 1; i++)
        cin >> c[i] >> s[i] >> f[i];
    for (int i = 0; i < n - 1; i++)
    {
        ll time = 0;
        for (int j = i; j < n - 1; j++)
        {
            if (time <= s[j])
                time = s[j] + c[j];
            else
            {
                ll diffblock=(time-s[j]+f[j]-1)/f[j];
                time=s[j]+f[j]*diffblock+c[j];
            }
        }
        cout<<time<<endl;
    }
    cout<<0<<endl;
}