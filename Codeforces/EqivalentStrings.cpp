#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;
typedef long long ll;
string lexo(string s)
{
    if(s.length()&1)
    return s;
    string s1=lexo(s.substr(0,s.length()/2));
    string s2=lexo(s.substr(s.length()/2));
    if(s1>s2)
    return s2+s1;
    else
    return s1+s2;

}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string a, b;
    cin >> a >> b;
    a=lexo(a);
    b=lexo(b);
    if(a==b)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}