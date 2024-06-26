#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int i,j=1;
        for( i=1;j<=k;)
        {
            if(i%3!=0 && i%10!=3)
            {
                j++;
            }
            i++;
            
        }
        cout<<i-1<<endl;

    }
}