#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool check(ll num)
{
    while(num%2==0)
    num/=2;
    while(num%3==0)
    num/=3;
    while(num%5==0)
    num/=5;
    if(num==1)
    return true;
    else
    return false;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        if(check(arr[i]))
        sum+=arr[i];
    }
    cout<<sum<<endl;
}