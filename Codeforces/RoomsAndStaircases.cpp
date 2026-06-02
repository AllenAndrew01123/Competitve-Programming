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
    ll ans=n;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        ans=max(ans,2*max(i+1,n-i));
    }
    cout<<ans<<endl;
}
int main() {     
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    cin.tie(0)->sync_with_stdio(0);
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
}
