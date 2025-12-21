#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int coord[n+1];
    int height[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>coord[i]>>height[i];
    }
    int ans=2;
    for(int i=2;i<=n-1;i++)
    {
        if(coord[i]-coord[i-1]>height[i])
        {
            ans++;
            continue;
        }
        if(coord[i+1]-coord[i]>height[i])
        {
            ans++;
            coord[i]+=height[i];
        }
    }
    if(n>1)
    cout<<ans<<endl;
    else
    cout<<1<<endl;
}