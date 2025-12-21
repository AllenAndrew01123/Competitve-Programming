#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

void spiralFromCenter(int n)
{
    vector<vector<int>> M(n, vector<int>(n, -1));
    int x = (n % 2 == 1 ? n / 2 : n / 2 - 1);
    int y = (n % 2 == 1 ? n / 2 : n / 2 - 1);
    int val = 0;
    M[x][y] = val++;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int step = 1;
    while (val < n * n)
    {
        for (int dir = 0; dir < 4 && val < n * n; ++dir)
        {
            for (int k = 0; k < step && val < n * n; ++k)
            {
                x += dx[dir];
                y += dy[dir];
                if (x >= 0 && x < n && y >= 0 && y < n)
                {
                    M[x][y] = val++;
                }
            }
            if (dir % 2 == 1)
                ++step;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << M[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        spiralFromCenter(n);
    }
}
