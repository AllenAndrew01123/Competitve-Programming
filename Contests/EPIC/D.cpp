#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    vector<int> numbers(12),n(100000);
    for (int i = 0; i < 100000; i++)
        cin >> n[i];
    for (int i = 0; i < 12; i++)
        numbers[i] = i + 1;
    vector<int> bitmask(6, 1);
    bitmask.resize(12, 0);
    do
    {
        vector<ll> s1, s2;
        for (int i = 0; i < 12; ++i)
        {
            if (bitmask[i])
                s1.push_back(numbers[i]);
        }
        for (int i = 0; i < 12; ++i)
        {
            if (!bitmask[i])
                s2.push_back(numbers[i]);
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i;
        for(i=0;i<100000;i++)
        {
            ll cnt=0;
            for(auto x:s1)
            {
                for(auto z:s2)
                {
                    if(x+z==n[i])
                    cnt++;
                }
            }
            if(cnt==0)
            break;
        }
        if(i==99999)
        {
            if(s1[0]==1)
            {
                for(auto x:s1)
                cout<<x<<" ";
                cout<<endl;
                for(auto x:s2)
                cout<<x<<" ";
            }
            else
            {
                for(auto x:s2)
                cout<<x<<" ";
                cout<<endl;
                for(auto x:s1)
                cout<<x<<" ";
            }
            return 0;
        }
    } while (next_permutation(bitmask.begin(), bitmask.end()));

    return 0;
}