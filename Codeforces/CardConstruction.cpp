#include <bits/stdc++.h>
using namespace std;
double solve(double n)
{
    double r = log2(n + 1);
    double c=0;
    while()
    {
        if(floor(r)==ceil(r) && (long long)r&1)
        {
            c++;
            return c;
        }
        else
        {
            c++;
            
        }
    }

}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        cout << solve(n) << endl;
    }
}