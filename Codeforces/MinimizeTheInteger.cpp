#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    vector<ll> arr(s.length());
    vector<ll> arr1,arr2;
    for (int i = 0; i < s.length(); i++)
    {
        arr[i] = (s[i] - 48);
        if(arr[i]&1)
        arr1.push_back(arr[i]);
        else
        arr2.push_back(arr[i]);
        
    }
    merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),arr.begin());
    for (auto x : arr)
        cout << x;
    cout << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}