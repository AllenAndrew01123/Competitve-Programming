#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    stack<int> up, lowe;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] == 'b')
            {
                if (!lowe.empty())
                    lowe.pop();
            }
            else
            {
                lowe.push(i);
            }
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {
            if (s[i] == 'B')
            {
                if (!up.empty())
                    up.pop();
            }
            else
            {
                up.push(i);
            }
        }
    }
    vector<int> idx;
    while (!up.empty())
    {
        idx.push_back(up.top());
        up.pop();
    }
    while (!lowe.empty())
    {
        idx.push_back(lowe.top());
        lowe.pop();
    }
    sort(idx.begin(), idx.end());
    for(int i=0;i<idx.size();i++)
    {
        cout<<s[idx[i]];
    }
    cout<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}