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
    ll n,m;cin>>n>>m;
    if(m%n!=0)
    {
        cout<<-1<<endl;
        return;
    }
    ll cnt2=0;
    ll div=m/n;
    while(div%2==0)
    {
        cnt2++;
        div/=2;
    }
    ll cnt3=0;
    while(div%3==0)
    {
        cnt3++;
        div/=3;
    }
    if(div!=1)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<cnt2+cnt3<<endl;
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
