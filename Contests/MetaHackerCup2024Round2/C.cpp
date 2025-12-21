#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool compareBySecond(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.second < b.second;
}
void solve()
{
    ll R, C, K;
    cin >> R >> C >> K;
    vector<vector<ll>> G(R, vector<ll>(C));
    ll max_id = 0;
    for (ll i = 0; i < R; i++)
    {
        for (ll j = 0; j < C; j++)
        {
            cin >> G[i][j];
            if (G[i][j] > max_id)
                max_id = G[i][j];
        }
    }
    vector<vector<pair<ll, ll>>> bunny_cells(max_id + 1);
    for (ll i = 0; i < R; i++)
    {
        for (ll j = 0; j < C; j++)
        {
            bunny_cells[G[i][j]].emplace_back(i, j);
        }
    }
    ll left = 0, right = max(R, C);
    ll answer = max(R, C);
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        ll s_row = min(mid, R - 1);
        ll s_col = min(mid, C - 1);
        ll sum_row = (ll)R * (2LL * s_row + 1) - 1LL * s_row * (s_row + 1);
        ll sum_col = (ll)C * (2LL * s_col + 1) - 1LL * s_col * (s_col + 1);
        ll total_pairs_S = sum_row * sum_col - (ll)R * C;
        ll same_owner_pairs_S = 0;
        for (ll b = 1; b <= max_id; b++)
        {
            ll cb = bunny_cells[b].size();
            if (cb <= 1)
                continue;
            vector<pair<ll, ll>> &cells = bunny_cells[b];
            sort(cells.begin(), cells.end());
            for (ll r = 0; r < cb; r++)
            {
                ll i_r = cells[r].first;
                ll j_r = cells[r].second;
                ll l = lower_bound(cells.begin(), cells.end(), make_pair(i_r - mid, -1LL)) - cells.begin();
                ll u = upper_bound(cells.begin(), cells.end(), make_pair(i_r + mid, C)) - cells.begin();
                ll low = j_r - mid;
                ll high = j_r + mid;
                ll lower_idx = lower_bound(cells.begin() + l, cells.begin() + u, make_pair(0, low),compareBySecond) -cells.begin();
                ll upper_idx = upper_bound(cells.begin() + l, cells.begin() + u, make_pair(0, high),compareBySecond) -cells.begin();
                same_owner_pairs_S += (ll)(upper_idx - lower_idx);
            }
            same_owner_pairs_S -= (ll)cb;
        }
        ll valid_pairs_S = total_pairs_S - same_owner_pairs_S;
        if (valid_pairs_S >= K)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << answer;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("bunny_hopscotch_input.txt", "r", stdin);
    freopen("file_name.out", "w", stdout);
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
}