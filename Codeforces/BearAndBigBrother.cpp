#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b;
    cin>>a>>b;
    int n=1;
    for(;;n++)
    {
        a=3*a;
        b=2*b;
        if(a>b)
        {
            cout<<n;
            break;
        }
    }
    return 0;
} 
