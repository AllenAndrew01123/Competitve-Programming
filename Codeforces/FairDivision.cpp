#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a=0,b=0;
        while(n--)
        {
            int x;cin>>x;
            if(x==1)
            a++;
            else
            b++;

        }
        if(a==0 && b%2!=0)
        cout<<"NO\n";
        else if((a+2*b)%2==0 && (a%2==0) )
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}