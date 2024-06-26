#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    ll a[n+1];
    ll ans=1;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    ll pref[n+1],suff[n+1];
    pref[1]=a[1];
    suff[n]=a[n];
    for(int i=2;i<=n;i++)
		pref[i]=__gcd(pref[i-1],a[i]);
	for(int i=n-1;i>=1;i--)
		suff[i]=__gcd(suff[i+1],a[i]);
    for(int i=0;i<=n-1;i++)
	{
		if(i==0)
			ans=suff[2];
		else if(i==n-1)
			ans=ans*pref[n-1]/__gcd(pref[n-1],ans);
		else
			ans=ans*__gcd(pref[i],suff[i+2])/__gcd(__gcd(pref[i],suff[i+2]),ans);
	}
    cout << ans << endl;
}