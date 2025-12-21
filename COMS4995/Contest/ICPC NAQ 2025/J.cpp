#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll arr[100];
    for(int i=0;i<100;i++)
    cin>>arr[i];
    if(arr[99]%10)
    cout<<arr[99]%10<<endl;
    else
    cout<<10<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}