#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int i,sum=0,count=0;
    while(cin>>i)
    {
        sum+=i;
        if(sum<0)
        {
            count++;
            sum=0;
        }
        else
        sum+=i;
    }
    cout<<count;
}