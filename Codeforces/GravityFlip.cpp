#include<bits/stdc++.h>
using namespace std;
int i;
main()
{
     cin.tie(0)->sync_with_stdio(0);
     int n;cin>>n;
     int a[n];
     while(cin>>a[i])i++;
     sort(a,a+n);
     int j=0;
     while(j<n)
     {
        cout<<a[j]<<" ";
        j++;
     }

}