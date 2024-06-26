#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long n, k;
    cin >> n >> k;
    long long a[n + 1];
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    long long cnt=1,i;
    for(i=(n+1)/2;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;
        }
        else
        {
            long long mult=cnt*(a[i+1]-a[i]);
            if(k>=mult)
            {
                k-=mult;
                cnt++;
            }
            else
            {
                break;
            }
        
        }
    }
    if(k<=0)
    cout<<a[i];
    else
    cout<<a[i]+k/cnt;

    
}