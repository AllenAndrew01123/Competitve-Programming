#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
#define N 200001
vector<ll> parent(N), sz(N);
void make_set(ll n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i]++;
    }
}
ll find(ll x)
{
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
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
    sz[x_root] += sz[y_root];
}
bool get(ll x,ll y)
{
    return find(x)==find(y);
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;cin>>n>>m;
    make_set(n);
    while(m--)
    {
        string s;cin>>s;
        if(s=="union")
        {
            ll x,y;cin>>x>>y;
            uni(x,y);
        }
        else
        {
            ll x,y;cin>>x>>y;
            if(get(x,y))
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
}