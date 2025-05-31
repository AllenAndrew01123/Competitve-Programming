#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(100001);
void precal()
{
    for (int i = 1; i <= 100000; i++)
        spf[i] = i;
    for (int i = 2; i <= 100000; i++)
    {
        if (spf[i] == i)
        {
            for (int j = 2 * i; j <= 100000; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    precal();
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ll temp = arr[i];
        while (temp != 1)
        {
            s.insert(spf[temp]);
            temp /= spf[temp];
        }
    }
    vector<bool> ans(m + 1, true);
    for (auto x : s)
    {
        for(int i=x;i<=m;i+=x)
        ans[i]=false;
    }
    ll cnt=0;
    for(int i=1;i<=m;i++)
    {
        if(ans[i])
        cnt++;
    }
    cout<<cnt<<endl;
    for(int i=1;i<=m;i++)
    {
        if(ans[i])
        cout<<i<<endl;
    }

}