#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 200001
typedef long long ll;
vector<ll> parent(N), sz(N, 1), points(N), extrapoints(N);
void make_set(ll n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
}
ll find(ll x)
{
    return(parent[x]==x)?x:find(parent[x]);
}
void uni(ll x, ll y)
{
    ll x_root = find(x);
    ll y_root = find(y);
    if (x_root == y_root)
        return;
    if (sz[x_root] < sz[y_root])
        swap(x_root, y_root);
    parent[y_root] = x_root;
    extrapoints[y_root]=points[x_root];
    sz[x_root] += sz[y_root];
}
ll add(ll x, ll v)
{
    ll root = find(x);
    points[root] += v;
}
ll get(ll x)
{
    ll amt=points[x];
    if(parent[x]==x)
    return amt;
    amt+=get(parent[x])-extrapoints[x];
    return amt;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    make_set(n);
    while (m--)
    {
        string s;
        cin >> s;
        if (s == "join")
        {
            ll x, y;
            cin >> x >> y;
            uni(x, y);
        }
        else if (s == "add")
        {
            ll x, v;
            cin >> x >> v;
            add(x, v);
        }
        else
        {
            ll x;
            cin >> x;
            cout<<get(x)<<endl;
        }
    }
}