#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;cin>>n;
    vector<vector<char>> a(n,vector<char>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char arr[4];
            arr[0]=a[i][j];
            arr[1]=a[j][n-1-i];
            arr[2]=a[n-1-i][n-1-j];
            arr[3]=a[n-1-j][i];
            sort(arr,arr+4);
            char mx=arr[3];
            ll innersum=0;
            for(int k=0;k<=2;k++)
            {
                innersum+=mx-arr[k];
            }
            // cout<<i<<" "<<j<<" "<<innersum<<endl;
            a[i][j]=mx;
            a[j][n-1-i]=mx;
            a[n-1-i][n-1-j]=mx;
            a[n-1-j][i]=mx;
            sum+=innersum;
        }
    }
    cout<<sum<<endl;
    
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