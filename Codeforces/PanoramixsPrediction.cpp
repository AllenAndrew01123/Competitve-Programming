#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    int i;
    for(i=n+1;;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count>2)
        continue;
        else
        break;
    }
    if(i==m)
    cout<<"YES";
    else
    cout<<"NO";
}