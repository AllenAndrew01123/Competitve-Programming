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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto ch : s)
        mp[ch]++;
    string temp="";
    for(auto x:mp)
    {
        if(x.second%n!=0)
        {
            cout<<-1<<endl;
            return;
        }
        for(int i=1;i<=x.second/n;i++)
        temp.push_back(x.first);
    }
    string ans="";
    for(int i=1;i<=n;i++)
    ans+=temp;
    cout<<ans<<endl;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while (t--)
    {
        solve();
    }
}
