#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    set<int> p;
    ll prod = 1;
    for (int i = 1; i < n; i++)
    {
        if (__gcd(n, i) == 1)
        {
            p.insert(i);
            prod =(prod*i)%n;
        }
    }
    if(prod%n!=1)
    p.erase(prod%n);
    cout<<p.size()<<endl;
    for(auto x:p)
    cout<<x<<" ";

}