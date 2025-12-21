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
        if(n==1)
        {
            cout<<0<<'\n';
            continue;
        }
        int c3=0;
        int c2=0;
        long long temp=n;
        while(n%3==0)
        {
            c3++;
            n/=3;
        }
        n=temp;
        while(n%2==0)
        {
            c2++;
            n/=2;
        }
        // cout<<c3<<" "<<c2<<endl;
        temp=temp/(pow(3,c3)*pow(2,c2));
        // cout<<temp<<endl;
        if(c2>c3)
        cout<<-1<<'\n';
        else if((c2==0 && c3==0)|| temp!=1)
        cout<<-1<<'\n';
        else
        cout<<(c3-c2)+c3<<'\n';
    }
}