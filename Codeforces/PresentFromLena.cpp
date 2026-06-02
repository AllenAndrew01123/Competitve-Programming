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
    for(int mid=0;mid<=n;mid++)
    {
        vector<ll>row;
        for(int i=0;i<=mid;i++)
            row.push_back(i);
        for(int i=mid-1;i>=0;i--)
            row.push_back(i);
        ll spaces=(2*n+1-row.size())/2;
        for(int i=1;i<=spaces;i++)
        cout<<"  ";
        for(int i = 0; i < row.size(); i++)
        {
            if(i) cout << " ";
            cout << row[i];
        }
        cout<<endl;
    }
    for(int mid=n-1;mid>=0;mid--)
    {
        vector<ll>row;
        for(int i=0;i<=mid;i++)
            row.push_back(i);
        for(int i=mid-1;i>=0;i--)
            row.push_back(i);
        ll spaces=(2*n+1-row.size())/2;
        for(int i=1;i<=spaces;i++)
        cout<<"  ";

        for(int i = 0; i < row.size(); i++)
        {
            if(i) cout << " ";
            cout << row[i];
        }

        cout<<endl;
    }
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
