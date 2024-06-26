#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n,m;cin>>n>>m;
    int a[n][m],b[n][m];
    map<int,pair<int,int>> mp1,mp2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            mp1[a[i][j]]={i,j};
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
            mp2[b[i][j]]={i,j};
        }
    }
    vector<ll> dist1(n*m+1,0);
    vector<ll> dist2(n*m+1,0);
    for(int i=1;i<=n*m;i++)
    {
        pair<int,int>p,q;
        p=mp1[i];
        q=mp2[i];
        dist1[i]=(p.second-q.second);
        dist2[i]=(p.first-q.first);
    }
    int c[n][m],d[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=dist1[a[i][j]];
            d[i][j]=dist2[a[i][j]];
        }
    }
    bool test1=true;
    for(int j=0;j<m;j++)
    {
        int val=c[0][j];
        for(int i=0;i<n;i++)
        {
            if(c[i][j]==val)
            continue;
            else
            test1=false;
        }
    }
    bool test2=true;
    for(int i=0;i<n;i++)
    {
        int val=d[i][0];
        for(int j=0;j<m;j++)
        {
            if(d[i][j]==val)
            continue;
            else
            test2=false;

        }
    }
    if(test1&&test2)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}