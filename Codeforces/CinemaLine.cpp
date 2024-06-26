#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int d;
        cin >> d;
        if (d == 25)
        {
            a++;
        }
        else if (d == 50)
        {
            a--;
            b++;
        }
        else
        {
            if (b == 0)
            {
                a-=3;
            }
            else
            {
                a--;
                b--;
            }
            c++;
        }
        if (a < 0 || b < 0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}