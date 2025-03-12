#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll sum = 0;
    ll n = 9;
    ll mul = 1;
    vector<ll> v;
    while (sum < 1e18)
    {
        v.push_back(sum);
        sum += n * mul;
        n *= 10;
        mul++;
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll numofdig = lower_bound(v.begin(), v.end(), x)-v.begin();
        // cout<<numofdig<<endl;
        ll first=1;
        for(int i=1;i<numofdig;i++)
            first*=10;
        // cout<<first<<endl;
        ll num=first+(x-v[numofdig-1]-1)/numofdig;
        // cout<<num<<endl;
        ll before=(num-first)*numofdig;
        // cout<<before<<endl;
        ll excess=x-v[numofdig-1]-1-before;
        // cout<<excess<<endl;
        string s=to_string(num);
        // cout<<s<<endl;
        cout<<s[excess]<<endl;
    }
}