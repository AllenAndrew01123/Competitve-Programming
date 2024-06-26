#include <bits/stdc++.h>
using namespace std;
void invert(string& s, int j, int r)
{
    for (int i = j; i <= r; i++)
    {
        if (s[i] == '1')
            s[i] = '0';
        else
            s[i] = '1';
    }
}
bool checker(string& s,int k)
{
    int i = 0;
    int c1 = 0, c2 = 0;
    while (s[i] == '1')
    {
        c1++;
        i++;
    }
    while (s[i] == '0')
    {
        c2++;
        i++;
    }
    // cout<<c1<<" "<<c2<<endl;
    if(c1+c2==s.length()&&(c2%k==0))
    return true;

    return false;

}
void solve()
{
    int n;
    cin >> n;
    string s,temp;
    cin >> s;
    temp=s;
    int k = n;
    while (k > n-60)
    {
        s=temp;
        for (int j = 0, r = k - 1; r < n; j++, r++)
        {
            if (s[j] == '0')
            {
                invert(s, j, r);
                // cout<<s<<endl;
            }
            
            if (checker(s,k))
            {
                cout<<k<<endl;
                return;
            }
        }
        k--;
    }
    k=60;
    while (k > 0)
    {
        s=temp;
        for (int j = 0, r = k - 1; r < n; j++, r++)
        {
            if (s[j] == '0')
            {
                invert(s, j, r);
                // cout<<s<<endl;
            }
            
            if (checker(s,k))
            {
                cout<<k<<endl;
                return;
            }
        }
        k--;
    }
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}