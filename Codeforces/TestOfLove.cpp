#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    vector<int> safe;
    safe.push_back(0);
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            safe.push_back(i + 1);
    }
    safe.push_back(n + 1);
    for (int i = 1; i < safe.size(); i++)
    {
        if (safe[i] - safe[i - 1] <= m)
            continue;
        else
        {
            for(int j=safe[i-1]-1+m;j<safe[i]-1;j++)
            {
                if(s[j]=='W')
                cnt++;
                else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    if(cnt<=k)
    cout << "YES" << endl;
    else
    cout<<"NO"<<endl;
    return;
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