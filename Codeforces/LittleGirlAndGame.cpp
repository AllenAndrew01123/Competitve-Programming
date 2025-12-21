#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp;
    char a;
    int cnt, even, odd;
    cnt = odd = even = 0;

    while (cin >> a)
    {
        mp[a]++;
        cnt++;
    }
    for (auto x : mp)
    {
        if (x.second & 1)
            odd++;
        else
            even++;
    }
    if (odd == 0 || odd == 1)
        cout << "First";
    else
    {
        if(cnt&1)
        cout<<"First";
        else
        cout<<"Second";
    }
}