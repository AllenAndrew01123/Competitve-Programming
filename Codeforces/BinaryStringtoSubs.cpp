#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;cin>>s;
    vector<int> v(n);
    stack<int>s0,s1;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            if(s0.empty())
            {
                s1.push(cnt);
                v[i]=cnt;
                cnt++;
            }
            else
            {
                int k=s0.top();
                v[i]=k;
                s1.push(k);
                s0.pop();
            }
        }
        else
        {
            if(s1.empty())
            {
                s0.push(cnt);
                v[i]=cnt;
                cnt++;
            }
            else
            {
                int k=s1.top();
                v[i]=k;
                s0.push(k);
                s1.pop();
            }
        }
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}