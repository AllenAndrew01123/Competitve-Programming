#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int a[n + 1];
    vector<int> ltr(n + 1, 1);
    vector<int> rtl(n + 1, 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > a[i - 1])
            ltr[i] = ltr[i - 1] + 1;
        else
            ltr[i] = 1;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] < a[i + 1])
            rtl[i] = rtl[i + 1] + 1;
        else
            rtl[i] = 1;
    }
    int ans=*max_element(ltr.begin(),ltr.end());
    for (int i = 2; i <= n-1; i++)
    {
        if(a[i-1]<a[i+1])
        ans=max(ans,ltr[i-1]+rtl[i+1]);
    }
    cout<<ans<<endl;
}