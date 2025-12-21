#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1)
    {
        cout<<1<<" "<<1<<endl;
        cout<<-a[0]<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        return 0;
    }
    cout<<1<<" "<<1<<endl;
    cout<<-a[0]<<endl;
    a[0]=0;
    cout<<1<<" "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<-n*a[i]<<" ";
    }
    cout<<endl;
    cout<<2<<" "<<n<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<(n-1)*a[i]<<" ";
    }
}