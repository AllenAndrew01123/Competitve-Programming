#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n);
    ll elem=arr[n/2];
    for(int i=0;i<n;i++)
    {
        sum+=abs(arr[i]-elem);
    }
    cout<<sum<<endl;


}
