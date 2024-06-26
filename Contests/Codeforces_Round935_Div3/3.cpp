#include<bits/stdc++.h>
using namespace std;
void solve()
{
    double n;cin>>n;
    string s;cin>>s;
    int size=n;
    vector <int> a(n+1),b(n+1);
    a[0]=0,b[0]=0;
    for(int j=0;j<n;j++)
    {
        if(s[j]=='0')
        {
            a[j+1]=a[j]+1;
            b[j+1]=b[j];
        }
        else
        {
            b[j+1]=b[j]+1;
            a[j+1]=a[j];
        }

    }
    int ans=INT_MAX;
    int idx;
    for(int i=0;i<=n;i++)
    {
        int lc0=a[i];
        int rc1=b[n]-b[i];
        // cout<<lc0<<i<<" "<<rc1<<n-i<<endl;
        if(2*lc0>=i && 2*rc1>=n-i)
        {
            // cout<<i<<endl;
            if(ans>abs(((n)/2.0)-i))
            {
                ans=abs(((n)/2.0)-i);
                idx=i;
            }
            else
            break;
        }

    }
    cout<<idx<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
