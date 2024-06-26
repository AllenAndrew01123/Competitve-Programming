#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        F(i,0,n)cin>>a[i];
        bool a1=false,a2=false,a3=false;
        if(a[0]<a[1])
        a1=true;
        int c=0;
        F(i,1,n-2)
        {
            if(a[i+1]-a[i]==2 || a[i+1]-a[i]==0)
            {
                c++;
                continue;
            }
            else
            break;
        }
        if(c==n-3)
        a2=true;
        if(a[n-2]-a[n-1]>=2)
        a3=true;
        if(a1&&a2&&a3)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
}