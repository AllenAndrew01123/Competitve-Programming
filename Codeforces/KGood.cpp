#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        cout << 2 << endl;
        return;
    }
    ll temp=2*n;
    ll cnt=0;
    while(temp%2==0)
    {
        cnt++;
        temp/=2;
    }
    if(temp==1)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<min(ll(pow(2,cnt)),temp)<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}