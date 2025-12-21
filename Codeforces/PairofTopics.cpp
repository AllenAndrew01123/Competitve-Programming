#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1], diff[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        int b;
        cin >> b;
        diff[i] = a[i] - b;
    }
    
    sort(diff + 1, diff + n + 1);
    long long ans = 0;
    for (int i = 1; i <=n; i++)
    {
        int x=upper_bound(diff+1,diff+n+1,-diff[i])-(diff);
        ans+=(n-x+1);
        if(diff[i]>0)
        ans--;
    }
    cout<<ans/2<<endl;
}