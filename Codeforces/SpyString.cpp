#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    string ans = v[0];
    for (int i = 0; i < m; i++)
    {
        char x = ans[i];
        for (char j = 'a'; j <= 'z'; j++)
        {
            ans[i] = j;
            bool flag=true;
            for (int k = 0; k < n; k++)
            {
                ll cnt = 0;
                for (int l = 0; l < m; l++)
                    if (v[k][l] != ans[l])
                        cnt++;
                if(cnt>1)
                {
                    flag=false;
                    break;
                } 
            }
            if(flag)
            {
                cout<<ans<<endl;
                return;
            }
        }
        ans[i]=x;
    }
    cout <<-1<<endl;
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