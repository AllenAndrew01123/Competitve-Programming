#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum=0;
    long long negmax=INT_MIN;
    long long posmax=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {   
            sum=(negmax>INT_MIN?sum+negmax:sum);
            negmax=INT_MIN;
            posmax=max(posmax,a[i]);
        }
        else
        {   
            sum+=posmax;
            posmax=0;
            negmax=max(negmax,a[i]);
        }
    }
    if(a[n-1]>0)
    cout<<sum+posmax<<endl;
    else
    cout<<sum+negmax<<endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}