#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;
    int i=n-1;
    long long sum=0;
    while(i>=1)
    {
        sum+=i*(n-i);
        i--;
    }
    cout<<sum+n;
}