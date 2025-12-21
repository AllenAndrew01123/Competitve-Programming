#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll ans[n+1];
    ll left=1,right=n;
    while(true)
    {
        if(left==right)
        break;
        ll a,b;
        cout<<"? "<<left<<" "<<right<<endl;
        cin>>a;
        cout<<"? "<<right<<" "<<left<<endl;
        cin>>b;
        if(a>b)
        {
            ans[left]=a;
            left++;
        }
        else
        {
            ans[right]=b;
            right--;
        }
        
    }
    ans[right]=n;
    cout<<"! ";
    for(int i=1;i<=n;i++)
    cout<<ans[i]<<" ";
}