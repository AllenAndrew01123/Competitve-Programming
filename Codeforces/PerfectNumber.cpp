#include <bits/stdc++.h>
using namespace std;

int cal(int num)
{
    int ans = 0;
    while (num)
    {
        ans += num % 10;
        num /= 10;
    }
    return ans;
}

int n;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n)
    {
        ans++;
        if (cal(ans) == 10)
            n--;
    }
    cout << ans;
}