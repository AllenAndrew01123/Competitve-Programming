#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    vector<int> numbers(12), n(100000);
    for (int i = 0; i < 100000; i++)
        cin >> n[i];
    iota(numbers.begin(), numbers.end(), 1); 
    vector<int> bitmask(6, 1);
    bitmask.resize(12, 0);
    ll cnt=0;
    do
    {
        vector<int> s1(6), s2(6);
        for (int i = 0; i < 12; ++i)
        {
            if (bitmask[i])
                s1.push_back(numbers[i]);
            else
                s2.push_back(numbers[i]);
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        set<int> possible_sums;
        for (auto x : s1)
            for (auto y : s2)
                possible_sums.insert(x + y);
        bool valid = true;
        for (int i = 0; i < 100000; ++i)
        {
            if (possible_sums.find(n[i]) == possible_sums.end())
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            if (find(s1.begin(),s1.end(),1)!=s1.end())
            {
                for (int i=0;i<6;i++)
                    cout << s1[i] << " ";
                cout << endl;
                for (int i=0;i<6;i++)
                    cout << s2[i] << " ";
            }
            else
            {
                for (int i=0;i<6;i++)
                    cout << s2[i] << " ";
                cout << endl;
                for (int i=0;i<6;i++)
                    cout << s1[i] << " ";
            }
            cout<<endl;
            return 0;
        }
        s1.clear();
        s2.clear();
        possible_sums.clear();
    } while (prev_permutation(bitmask.begin(), bitmask.end()));
}