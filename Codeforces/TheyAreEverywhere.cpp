#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    string temp=s;
    sort(temp.begin(),temp.end());
    temp.erase(unique(temp.begin(),temp.end()),temp.end());
    int len=temp.size();
    int l=len;
    int r=n;
    int ans=n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        map<char,int>mp;
        bool flag=false;
        for(int i=0;i<mid;i++)
        {
            mp[s[i]]++;
        }
        if(mp.size()==len)
        flag=true;
        for(int i=mid;i<n;i++)
        {
            mp[s[i-mid]]--;
            if(mp[s[i-mid]]==0)
            mp.erase(s[i-mid]);
            mp[s[i]]++;
            if(mp.size()==len)
            flag=true;
        }
        if(flag)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while(t--)
    {
        solve();
    }
}