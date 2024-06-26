#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<((a+b+c)&1?-1:min(a+b,(a+b+c)/2))<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}