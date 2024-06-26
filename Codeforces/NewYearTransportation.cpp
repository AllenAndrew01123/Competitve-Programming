#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,t,i=1;
    cin>>n>>t;
    int a[n];
    while(cin>>a[i])i++;
    vector <int> v;
    v.push_back(1);
    int j=0,k;
    while(1)
    {
        k=v[j];
        v.push_back(v[j]+a[k]);
        j++;
        if(t==v[j])
        {
            cout<<"YES";
            break;
        }
        if(v[j]>t)
        {
            cout<<"NO";
            break;
        }
        
    }
}