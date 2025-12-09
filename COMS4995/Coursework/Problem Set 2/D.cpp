#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char arr[2] = {'B', 'R'};
    if (count(s.begin(), s.end(), '?') == n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i % 2];
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '?')
        {
            ll idx=i-1;
            ll bit=s[i]=='B'?0:1;
            while(s[idx]=='?')
            {
                bit^=1;
                s[idx]=arr[bit];
                idx--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
        s[i]=s[i-1]=='R'?'B':'R';
    }
    cout<<s<<endl;
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