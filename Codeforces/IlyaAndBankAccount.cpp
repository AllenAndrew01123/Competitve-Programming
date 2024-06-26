#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    if(n>=0)
    cout<<n;
    else
    {
     int m=-n;
     int a=m/10;
     int b=(m/100)*10 + m%10;
     cout<<max(-a,-b);

    }
}