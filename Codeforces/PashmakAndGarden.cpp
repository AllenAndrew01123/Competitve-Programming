#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    if (y2 - y1 == x2 - x1 || y2 - y1 == x1 - x2 || x1 == x2 || y1 == y2)
    {
        if (x1 == x2)
        {
            int l = abs(y2 - y1);
            x3 = x1 + l;
            y3 = y1;
            x4 = x2 + l;
            y4 = y2;
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        }
        else if (y1 == y2)
        {
            int l = abs(x2 - x1);
            x3 = x1;
            y3 = y1 + l;
            x4 = x2;
            y4 = y2 + l;
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        }
        else
        {
            int l = abs(x2 - x1);
            x3 = x1;
            x4 = x2;
            if (y2 > y1)
            {
                y4 = y2 - l;
                y3 = y1 + l;
            }
            else
            {
                y4 = y2 + l;
                y3 = y1 - l;
            }
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        }
    }
    else
    {
        cout << -1;
    }
}