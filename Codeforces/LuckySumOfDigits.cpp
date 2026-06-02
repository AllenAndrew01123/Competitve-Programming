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
    for(int i=0;i<=n/4;i++)
    {
        if((n-4*i)%7==0)
        {
            for(int j=1;j<=i;j++)
            cout<<4;
            for(int j=1;j<=(n-4*i)/7;j++)
            cout<<7;
            return;
        }
    }
    cout<<-1<<endl;
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
