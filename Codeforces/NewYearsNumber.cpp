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
        int sum,c=0;
        int i,j;
        for(i=0;;i++)
        {
            if(i*2020>n)
            {
                cout<<"NO\n";
                break;
            }
            sum=0;
            for(j=0;sum<n;j++)
            {
                sum=i*2020+j*2021;
                if(sum==n)
                {
                    c++;
                    cout<<"YES\n";
                    break;
                }
            }
            if(c==1)
            break;
        }
    }
}