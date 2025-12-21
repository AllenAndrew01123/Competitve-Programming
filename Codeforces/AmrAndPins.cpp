#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, x, y, a, b;
    cin >> r >> x >> y >> a >> b;
    cout << ceil(hypot(x - a, y - b) / (2 * r));
}