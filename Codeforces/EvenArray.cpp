#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int i=0,even=0,odd=0;
        while(i<n)
        {
            cin>>a[i];
            if(i%2==0)
            {
                if(a[i]%2!=0)
                even++;
            }
            if(i%2!=0)
            {
                if(a[i]%2==0)
                odd++;
            }
            i++;
        }
        if(odd!=even)
        cout<<"-1\n";
        else
        cout<<even<<endl;
    }
}