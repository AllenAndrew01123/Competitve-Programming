#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int i=0;
        while(i<n)
        {
            cin>>a[i];i++;
        }
        sort(a,a+n);
        cout<<a[n-1]-a[0]<<"\n";
    }
}
