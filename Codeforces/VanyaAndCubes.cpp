#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(sum<n)
    {
        sum+=i*(i+1)/2;
        if(sum>n)break;
        i++;
    }
    cout<<i-1;
}