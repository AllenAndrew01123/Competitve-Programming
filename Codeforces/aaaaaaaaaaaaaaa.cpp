#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
double sqrtBinarySearch(double n)
{
    double low = 0, high = n, mid;
    double eps = 1e-11;

    while (high - low > eps)
    {
        mid = (low + high) / 2.0;
        if (mid * mid > n)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    return (low + high) / 2.0;
}
int main()
{
    // precision till 10th decimal place
    //  Alternatively, the same result can be obtained directly with using in-built func:
    // cout << fixed << setprecision(10) << sqrt(42) << endl;
    cout << fixed << setprecision(10) << sqrtBinarySearch(42.0) << endl;
}