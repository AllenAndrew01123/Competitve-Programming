#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;cin>>s;
    int a=0,b=0,l=0,ans=0;
    for(int r=0;r<s.length();r++)
    {
        if(s[r]=='a')
        a++;
        else
        b++;
        if(min(a,b)<=k)
        {
            ans=max(ans,a+b);
        }
        else
        {
            if(s[l]=='a')
            a--;
            else
            b--;
            l++;
        }

    }
    cout<<ans<<endl;
}