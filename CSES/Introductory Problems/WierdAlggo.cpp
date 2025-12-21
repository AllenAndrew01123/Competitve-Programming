#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    while (n != 1)
    {
        cout << n <<" ";
        if (n & 1)
            n = 3 * n + 1;
        else
            n /= 2;
    }
    cout << n << endl;
}