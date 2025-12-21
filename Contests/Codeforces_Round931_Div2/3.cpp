#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n, m, d,d1,d2,x;
    cin >> n >> m;
    cout << "? 1 1" << endl;
    cout.flush();
    cin >> d;
    int i1, j1,i2,j2;
    if (d > m - 1)
    {
        i1 = d - m + 2;
        j1 = m;
    }
    else
    {
        i1 = 1;
        j1 = d + 1;
    }
    if(d+1<=n)
    {
        i2=d+1;
        j2=1;
    }
    else
    {
        i2=n;
        j2=d+2-n;
    }
    cout<<"? "<<i1<<" "<<j1<<endl;
    cout.flush();
    cin>>d1;
    int potx1=(d+d1+2+i1-j1)/2;
    int poty1=(d-d1+2+j1-i1)/2;
    cout<<"? "<<i2<<" "<<j2<<endl;
    cout.flush();
    cin>>d2;
    int potx2=(d-d2+2+i2-j2)/2;
    int poty2=(d+d2+2+j2-i2)/2;
    cout<<"? "<<potx1<<" "<<poty1<<endl;
    cout.flush();
    cin>>x;
    if(x==0)
    {
        cout<<"! "<<potx1<<" "<<poty1<<endl;
    }
    else
    {
        cout<<"! "<<potx2<<" "<<poty2<<endl;
    }

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
