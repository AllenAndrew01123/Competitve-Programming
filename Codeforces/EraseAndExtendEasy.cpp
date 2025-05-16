#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char a = s[0];
    string ans = "";
    for (int i = 1; i <= k; i++)
        ans.push_back(a);
    for(int i=1;i<n;i++)
    {
        string temp="";
        string sub=s.substr(0,i+1);
        ll j=k/sub.length();
        ll rem=k%sub.length();
        while (j--)
            temp.append(sub);
        temp.append(sub.substr(0,rem));
        if(temp<ans)
        ans=temp;
    }
    cout<<ans<<endl;
}