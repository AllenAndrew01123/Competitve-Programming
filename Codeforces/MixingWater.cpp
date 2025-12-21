#include<bits/stdc++.h>
using namespace std;
main()
{
    int tt;cin>>tt;
    while(tt--)
    {
        double h,c,t;cin>>h>>c>>t;
        double mindiff=1e20;
        if((h+c)/2>=t)
        {
            cout<<2<<endl;
            continue;
        }
        long long k=(h-t)/(2*t-h-c);
        double d1=((k+1)*h+k*c)/(2*k+1);
        double d2=((k+2)*h+(k+1)*c)/(2*k+3);
        long long ans=abs(d1-t)>abs(d2-t)?k+1:k;
        cout<<2*ans+1<<endl;
    }
}