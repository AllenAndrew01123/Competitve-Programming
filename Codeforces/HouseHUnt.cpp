#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int a[n],b[n];
    int mx=-1;
    int idx;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            idx=i;
        }
    }
    rotate(a,a+idx+1,a+n);
    rotate(b,b+idx,b+n);
    reverse(b,b+n);
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        // sum1+=i*a[i];
        // sum2+=i*b[i];
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    cout<<max(sum1,sum2)<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}