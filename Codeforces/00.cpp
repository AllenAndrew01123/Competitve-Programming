#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    ll minsum=0;
    ll minodd=9;
    for(int i=0;i<n;i++)
    {
        minsum+=min(abs(arr1[i]-arr2[i]),9-abs(arr1[i]-arr2[i]));
        minodd=min(minodd,abs(abs(arr1[i]-arr2[i])-(9-abs(arr1[i]-arr2[i]))));
    }
    if(minsum>k)
    {
        cout<<"No\n";
    }
    else
    {
        if((k-minsum)%2==0)
        cout<<"Yes\n";
        else
        {
            if(minodd<=(k-minsum))
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
    }


}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}