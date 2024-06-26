#include <bits/stdc++.h>
using namespace std;
int calc(string s,char c)
{
    if(s.length()==1)
    {
        if(s[0]!=c)
        return 1;
        else
        return 0;
    }
    int c1=calc(s.substr(0,s.length()/2),c+1);
    c1+=(s.length()/2-count(s.begin() + s.length() / 2, s.end(), c));
    int c2=calc(s.substr(s.length()/2,s.length()/2),c+1);
    c2+=(s.length()/2-count(s.begin(), s.begin() + s.length() / 2, c));
    return min(c1,c2);

}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c = 'a';
    cout<<calc(s,c)<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}