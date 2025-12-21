#include<bits/stdc++.h>
using namespace std;
int a[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    int i;
    for(i=0;i<14;i++)
    {
        if(n%a[i]==0)
        break;
    }
    if(i==14)
    cout<<"NO";
    else
    cout<<"YES";
}
