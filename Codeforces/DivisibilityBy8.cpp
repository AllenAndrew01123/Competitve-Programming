#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - 48;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 8 == 0)
        {
            cout << "YES" << endl;
            cout << v[i];
            return 0;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((v[i] * 10 + v[j]) % 8 == 0)
            {
                cout << "YES" << endl;
                cout << v[i] * 10 + v[j];
                return 0;
            }
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((v[i] * 100 + v[j] * 10 + v[k]) % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << v[i] * 100 + v[j] * 10 + v[k];
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
}