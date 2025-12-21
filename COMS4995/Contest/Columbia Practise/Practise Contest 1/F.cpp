#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1(n), v2(n);
    map<ll, ll> mp1, mp2, mp3, mp4, mp5;
    // Round 1
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp1[v1[i]]++;
    }
    cout << "- 0" << endl;
    // Round 2
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
        mp2[v2[i]]++;
    }
    if (mp1 == mp2)
        cout << "- 0" << endl;
    if (mp1 != mp2)
    {
        set<ll> s;
        for (int i = 1; i <= 9; i++)
        {
            // cout<<mp1[i]<<" "<<mp2[i]<<endl;
            if (mp1[i] >= mp2[i])
                s.insert(i);
        }
        vector<ll> rem;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.find(v2[i]) != s.end())
            {
                rem.push_back(i + 1);
                cnt++;
            }
        }
        if (n - cnt == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s.find(v2[i]) == s.end())
                {
                    cout << "! " << i + 1 << endl;
                    return;
                }
            }
        }
        cout << "- " << rem.size() << " ";
        for (auto x : rem)
        {
            cout << x << " ";
        }
        for (auto x : s)
        {
            mp2.erase(x);
        }
        cout << endl;
        n -= cnt;
    }
    // Round 3
    vector<ll> v3(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v3[i];
        mp3[v3[i]]++;
    }
    if (mp2 == mp3)
        cout << "- 0" << endl;
    if (mp2 != mp3)
    {
        set<ll> s;
        for (int i = 1; i <= 9; i++)
        {
            if (mp2[i] >= mp3[i])
                s.insert(i);
        }
        vector<ll> rem;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.find(v3[i]) != s.end())
            {
                rem.push_back(i + 1);
                cnt++;
            }
        }
        if (n - cnt == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s.find(v3[i]) == s.end())
                {
                    cout << "! " << i + 1 << endl;
                    return;
                }
            }
        }
        cout << "- " << rem.size() << " ";
        for (auto x : rem)
        {
            cout << x << " ";
        }
        for (auto x : s)
        {
            mp3.erase(x);
        }
        cout << endl;
        n -= cnt;
    }
    // Round 4
    vector<ll> v4(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v4[i];
        mp4[v4[i]]++;
    }
    if (mp3 == mp4)
        cout << "- 0" << endl;
    if (mp3 != mp4)
    {
        set<ll> s;
        for (int i = 1; i <= 9; i++)
        {
            if (mp3[i] >= mp4[i])
                s.insert(i);
        }
        vector<ll> rem;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.find(v4[i]) != s.end())
            {
                rem.push_back(i + 1);
                cnt++;
            }
        }
        if (n - cnt == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s.find(v4[i]) == s.end())
                {
                    cout << "! " << i + 1 << endl;
                    return;
                }
            }
        }
        cout << "- " << rem.size() << " ";
        for (auto x : rem)
        {
            cout << x << " ";
        }
        for (auto x : s)
        {
            mp4.erase(x);
        }
        cout << endl;
        n -= cnt;
    }
    // Round 5
    vector<ll> v5(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v5[i];
        mp5[v5[i]]++;
    }
    if (mp4 == mp5)
        cout << "- 0" << endl;
    if (mp4 != mp5)
    {
        set<ll> s;
        for (int i = 1; i <= 9; i++)
        {
            if (mp4[i] >= mp5[i])
                s.insert(i);
        }
        vector<ll> rem;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.find(v5[i]) != s.end())
            {
                rem.push_back(i + 1);
                cnt++;
            }
        }
        if (n - cnt == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s.find(v5[i]) == s.end())
                {
                    cout << "! " << i + 1 << endl;
                    return;
                }
            }
        }
        cout << "- " << rem.size() << " ";
        for (auto x : rem)
        {
            cout << x << " ";
        }
        for (auto x : s)
        {
            mp5.erase(x);
        }
        cout << endl;
        n -= cnt;
    }
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