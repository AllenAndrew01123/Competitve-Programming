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
void fill(set<char> &s)
{
    s.insert('A');
    s.insert('B');
    s.insert('C');
    s.insert('D');
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    char s1[2]={'A','B'};
    char s2[2]={'C','D'};
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='A'||arr[i][j]=='B')
            arr[i][j]=s2[(i+j)%2];
            else
            arr[i][j]=s1[(i+j)%2];
            cout<<arr[i][j];
        }
        cout<<endl;
    }
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
