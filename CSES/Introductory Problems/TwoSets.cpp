#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum & 1)
        cout << "NO" << endl;
    else
    {
        set<ll>s1,s2;
        for(int i=1;i<=n;i++)
        s2.insert(i);
        ll target=sum/2;
        ll num=n;
        while(true)
        {
            if(target>num)
            {
                s1.insert(num);
                s2.erase(num);
                target-=num;
                num--;
            }
            else
            {
                s1.insert(target);
                s2.erase(target);
                break;
            }
        }
        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        for(auto x:s1)
        cout<<x<<" ";
        cout<<endl;
        cout<<s2.size()<<endl;
        for(auto x:s2)
        cout<<x<<" ";

    }
}