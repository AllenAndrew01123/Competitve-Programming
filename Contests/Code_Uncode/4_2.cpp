#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &p, pair<int, int> &q)
{
    if (p.first < q.first)
        return true;
    else if (p.first == q.first && p.second > q.second)
        return true;
    return false;
}
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }
    sort(v.begin(), v.end(), cmp);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    long long benefit = 0;
    int sum = 0;
    int i = 0;
    while (m-- && i < n)
    {
        if (v[i].second <= m)
        {
            benefit += v[i].first;
            i++;
        }
        else
        {
            i++;
            continue;
        }
        m--;
    }
    cout << benefit;
}
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;


// bool cmp(pair<int, int>& a, pair<int, int>& b) {
//     if(a.second > b.second) return true;
//     else if(a.second == b.second) return (a.first >= b.first);
//     return false;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<pair<int, int>> v;
//     while(n--) {
//         int days, reward;
//         cin >> days >> reward;
//         v.push_back({days, reward});
//     }
//     sort(v.begin(), v.end(), cmp);
//     int current_day = 0;
//     ll ans = 0;
//     for(auto& x : v) {
//         if(current_day + x.first <= m) {
//             ans += x.second;
//              ++current_day;
//         }
//     }
//     cout << ans;
//     return 0;
// }