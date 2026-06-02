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

bool possible(const map<char,int>& mp, char ch)
{
    char mode = '1';
    int len = 0;
    int mx = 0;

    for (auto x : mp)
    {
        len += x.second;
        if (x.second > mx)
        {
            mx = x.second;
            mode = x.first;
        }
    }

    if (ch == mode)
        return mx <= len / 2;
    else
        return mx <= (len + 1) / 2;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    map<char, int> mp;
    for (auto x : s)
        mp[x]++;
    string ans="";
    char last='1';
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='Z';ch++)
        {
            if(mp[ch]==0 || ch==last)
            continue;
            mp[ch]--;
            if(possible(mp,ch))
            {
                ans.push_back(ch);
                // cout<<ans<<endl;
                last=ch;
                break;
            }
            else
            mp[ch]++;
        }
    }
    if(ans.length()==n)
    cout<<ans<<endl;
    else
    cout<<-1<<endl;
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
