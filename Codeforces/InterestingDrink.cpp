#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int q;cin>>q;
    while(q--)
    {
        int p;cin>>p;
        cout<<upper_bound(a,a+n,p)-a<<endl;
    }
}

