#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4!=0)
        cout<<"NO\n";
        else
        { 
            int count=0;
            cout<<"YES\n";
            int i=1;
            for(;i<=n/2;i++)
            cout<<2*i<<" ";
            i=1;
            for(;i<=n/4;i++)
            {
                cout<<2*i-1<<" ";
                count++;
            }
            i++;
            while(count--)
            {
                cout<<2*i-1<<" ";
                i++;
            }


        }
        cout<<endl;
        
    }
}