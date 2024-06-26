#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll r;cin>>r;
    ll cnt=0;
    for(ll y=0;y<=r;y++)
    {
        double lower=sqrt(r*r-y*y);
        double upper=sqrt((r+1)*(r+1)-y*y);
        if(floor(lower)==ceil(lower) && floor(upper)==ceil(upper))
        {
            cnt+=upper-lower;
        }
        else if(floor(lower)==ceil(lower))
        {
            cnt++;
            cnt+=((floor(upper)))-(floor(lower));
        }
        else if(floor(upper)==ceil(upper))
        {
            cnt--;
            cnt+=((floor(upper)))-(floor(lower));
        }

        else
        {
        cnt+=((floor(upper)))-(floor(lower));
        }
    }
    cout<<(cnt-1)*4<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}