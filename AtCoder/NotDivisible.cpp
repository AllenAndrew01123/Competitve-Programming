#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll arr[n];
    map<ll,ll>mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1 && mp[1]==1)
        ans++;
        if(mp.find(1)!=mp.end())
        continue;
        if(mp[arr[i]]>1)
        continue;
        bool flag = false;
        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                if (mp.find(j) != mp.end() || mp.find(arr[i] / j) != mp.end())
                {
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
            ans++;
    }
    cout<<ans<<endl;
}