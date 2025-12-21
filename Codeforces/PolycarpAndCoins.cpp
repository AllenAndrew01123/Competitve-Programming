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
        cout<<"1 0\n";
        else if(n==2)
        cout<<"0 1\n";
        else{
            int i=n/3;
            int j=n/3;
            if(n%3==1)
            i++;
            else if(n%3==2)
            j++;
            cout<<i<<" "<<j<<endl;
        }
    }
}