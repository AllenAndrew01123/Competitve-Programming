#include <iostream>
using namespace std;
int main()
{
    int n, x, p = 3, ans=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0 || (x == p && x != 3))
            ans++, p = 0;
        else
            p = (x == 3) ? 3 - p : x;
    }
    cout << ans;
}