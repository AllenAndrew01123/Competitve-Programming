#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <unordered_set>
#include <vector>
#include <stack>
#include <sstream>
#include <deque>
using namespace std;
typedef long long ll;
#define mod 1000000007

void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++)
    {
        map<char,ll>mp;
        mp[s[i]]++;
        ll mx=mp[s[i]];
        for(int j=i+1;j<n;j++)
        {
            mp[s[j]]++;
            mx=max(mx,mp[s[j]]);
            if(mx<=(j-i+1)/2)
            {
                cout<<"YES\n";
                cout<<s.substr(i,j-i+1)<<endl;
                return;
            }
        }
    }
    cout<<"NO\n";
}
int main() {     
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    cin.tie(0)->sync_with_stdio(0);
    ll t=1;
    while(t--)
    {
        solve();
    }
}
