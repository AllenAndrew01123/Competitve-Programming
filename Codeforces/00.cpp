#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt1 = 0, cnt0 = 0;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt1++;
            if (cnt0 == 0)
                continue;
            else
            {
                v.push_back(cnt0);
                cnt0 = 0;
            }
        }
        else
            cnt0++;
    }
    v.push_back(cnt0);
    cnt0 = 0;
    sort(v.begin(),v.end(),greater<int>());
    for(auto x:v)
    {
        if(k>=2*x+1)
        {
            k-=2*x+1;
            cnt1+=x;
        }
        else
        {
            cnt1+=(k-1)/2;
            k=1;
        }
    }
    cout<<cnt1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
