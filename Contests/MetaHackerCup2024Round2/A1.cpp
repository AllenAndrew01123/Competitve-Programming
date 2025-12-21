#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> v={1,2,121,3,232,12321,4,343,23432,1234321,5,454,34543,2345432,123454321,6,565,45654,3456543,234565432,12345654321,7,676,56765,4567654,345676543,23456765432,1234567654321,8,787,67876,5678765,456787654,34567876543,2345678765432,123456787654321,9,898,78987,6789876,567898765,45678987654,3456789876543,234567898765432,12345678987654321};
void solve()
{
  ll a,b,m;cin>>a>>b>>m;
  ll cnt=0;
  for(int i=0;i<v.size();i++)
  {
    if(v[i]%m==0 && v[i]>=a && v[i]<=b)
    cnt++;
  }
  cout<<cnt;

}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    // freopen("cottontail_climb_part_1_input.txt", "r", stdin);
    // freopen("file_name.out", "w", stdout);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
}