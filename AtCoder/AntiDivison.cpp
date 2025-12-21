#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll a,b,c,d;cin>>a>>b>>c>>d;
    ll numdivc=b/c-(a+c-1)/c+1;
    ll numdivd=b/d-(a+d-1)/d+1;
    ll l=c*d/__gcd(c,d);
    ll numdivcd=b/l-(a+l-1)/l+1;
    cout<<(b-a+1)-numdivc-numdivd+numdivcd<<endl;
}
