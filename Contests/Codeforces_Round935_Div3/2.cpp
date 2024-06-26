#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,m;
        cin>>a>>b>>m;
        m++;
        long long ans=(m+a-1)/a+(m+b-1)/b;
        cout<<ans<<endl;
    }
}