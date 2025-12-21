#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 10000000007
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    ll a[n];
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int c=1;;c++){
		if(pow(c,n-1)>1e10)break;
		ll aa=0;
		for(ll i=0;i<n;i++)
			aa+=abs(a[i]-pow(c,i));
		ans=min(ans,aa);
	}
    cout<<ans<<endl;
}