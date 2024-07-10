#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    vector<set<int>> v(26);
    for(int i=0;i<s.length();i++)
    {
        v[s[i]-'a'].insert(i);
    }
    int q;cin>>q;
    while(q--)
    {
        int x;cin>>x;
        if(x==1)
        {
            int pos;
            char c;
            cin>>pos>>c;
            pos--;
            v[s[pos]-'a'].erase(pos);
            s[pos]=c;
            v[s[pos]-'a'].insert(pos);
        }
        else
        {
            int cnt=0;
            int l,r;
            cin>>l>>r;
            l--,r--;
            for(int i=0;i<26;i++)
            {
                auto it=v[i].lower_bound(l);
                if(it!=v[i].end() && *it<=r)
                cnt++;
            }
            cout<<cnt<<endl;
        }
        
    }
    return 0;

}