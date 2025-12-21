#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        int a[4];cin>>a[0]>>a[1]>>a[2]>>a[3];
        int c=0;
        if(a[1]>a[0])
        c++;
        if(a[2]>a[0])
        c++;
        if(a[3]>a[0])
        c++;
        cout<<c<<endl;

    }
}