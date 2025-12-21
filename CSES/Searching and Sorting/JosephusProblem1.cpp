#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    queue<ll>q;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    bool flag=false;
    while(!q.empty())
    {
        if(flag==false)
        {
            ll x=q.front();
            q.push(x);
            q.pop();
            flag=true;
        }
        else
        {
            cout<<q.front()<<" ";
            q.pop();
            flag=false;
        }
    }
    
    
}