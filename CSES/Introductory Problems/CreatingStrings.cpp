#include<bits/stdc++.h>
using namespace std;
#define mod 10000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    set<string>ans;
    sort(s.begin(),s.end());
    do{
        ans.insert(s);
    }
    while(next_permutation(s.begin(),s.end()));
    cout<<ans.size()<<endl;
    for(auto x:ans)
    cout<<x<<endl;
}