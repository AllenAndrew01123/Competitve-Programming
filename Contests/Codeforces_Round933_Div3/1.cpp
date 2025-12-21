#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int count=0;
        int b[n];
        int c[m];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<m;i++) cin>>c[i];
        sort(b,b+n);
        sort(c,c+m);
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[i]+c[j]<=k)
                count++;
                else
                break;
            }
        }
        cout<<count<<endl;
        
    }
}