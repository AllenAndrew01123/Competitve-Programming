#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    if(n>=m)
    {
        int min=ceil(n/2.0);
        while(1)
        {
            if(min%m==0)
            break;
            min++;
        }
        cout<<min;

    }
    else
    cout<<-1;
}