#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int a[26];
    for (int i = 0; i < 26; i++)
        cin >> a[i];
    vector<int> lf(s.length()), rt(s.length());
    ll cnt = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '?')
            cnt = a[s[i] - 97];
        else
            lf[i]=cnt;
    }
    cnt = -1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != '?')
            cnt = a[s[i] - 97];
        else
            rt[i]=cnt;
    }
    for (int i = 0; i < s.length(); i++)
    {
        int l=lf[i],r=rt[i];
        if (s[i] == '?')
        {
            if (r == -1)
                r = l;
            if (l == -1)
                l = r;
            if (l == -1 && r == -1)
            {
                l = 0;
                r = 1e5;
            }
            for (int j = 0; j < 26; j++)
            {
                if (a[j] >= min(l,r) && a[j] <= max(l,r))
                {
                    s[i] = j+97;
                    break;
                }
            }
        }
    }
    ll sum=0;
    for(int i=0;i<s.length()-1;i++)
    sum+=abs(a[s[i+1]-97]-a[s[i]-97]);
    cout<<sum<<endl;
    cout<<s<<endl;
}