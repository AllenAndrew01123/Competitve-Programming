#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    if(n<5)
    {
        cout<<0<<endl;
        return;
    }
    int upp=sqrt(2*n-1);
    cout<<ceil((upp-2)/(2*1.0))<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}