#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    map<int, int> mp;
    int mx=0;
    int a[n + 1];
    int b[n + 1];
    int pos1[n + 1];
    int pos2[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos1[a[i]] = i;
    }
    for (int j = 1; j <= n; j++)
    {
        cin >> b[j];
        pos2[b[j]] = j;
    }
    for (int i = 1; i <= n; i++)
    {
        int x=pos1[i]-pos2[i];
        if(x<0)
        x=n+x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    cout<<mx<<endl;
}