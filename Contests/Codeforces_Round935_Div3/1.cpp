#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,c;cin>>a>>b>>c;
    long long check=3-b%3;
    if(b%3==0)
    {
        check=0;
    }
    b+=check;
    long long d=c-check;
    if(c<check)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<a+b/3+(d+2)/3<<endl;
        return;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

}