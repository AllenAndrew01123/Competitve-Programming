#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int sum=1;
        int k=1;
        while(1)
        {
            sum+=pow(2,k);
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
            k++;


        }
    }
}