#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

vector<vector<bool>> visited(7, vector<bool>(7, false));
ll reserved[49];
ll ans = 0, steps = 0;

void calc(ll currrow, ll currcol)
{
    if ((currrow == 6) && (currcol == 0))
    {
        if (steps == 48) 
            ans++;
        return;
    }

    bool f1 = (currcol >= 1 && currcol <= 5 && !visited[currrow][currcol + 1] && !visited[currrow][currcol - 1]) &&
              ((currrow == 0 && visited[currrow + 1][currcol]) || (currrow == 6 && visited[currrow - 1][currcol]));

    bool f2 = (currrow >= 1 && currrow <= 5 && !visited[currrow + 1][currcol] && !visited[currrow - 1][currcol]) &&
              ((currcol == 0 && visited[currrow][currcol + 1]) || (currcol == 6 && visited[currrow][currcol - 1]));

    bool f3 = (currrow >= 1 && currrow <= 5 && currcol >= 1 && currcol <= 5 && visited[currrow + 1][currcol] &&
               visited[currrow - 1][currcol] && !visited[currrow][currcol + 1] && !visited[currrow][currcol - 1]);

    bool f4 = (currrow >= 1 && currrow <= 5 && currcol >= 1 && currcol <= 5 && visited[currrow][currcol + 1] &&
               visited[currrow][currcol - 1] && !visited[currrow + 1][currcol] && !visited[currrow - 1][currcol]);

    if (f1 || f2 || f3 || f4)
    {
        return;
    }
    visited[currrow][currcol] = true;
    if (reserved[steps] != -1)
    {
        switch (reserved[steps])
        {
        case 0:
            if (currrow > 0 && !visited[currrow - 1][currcol])
            {
                steps++;
                calc(currrow - 1, currcol);
                steps--;
            }
            break;
        case 1:
            if (currrow < 6 && !visited[currrow + 1][currcol])
            {
                steps++;
                calc(currrow + 1, currcol);
                steps--;
            }
            break;
        case 2:
            if (currcol > 0 && !visited[currrow][currcol - 1])
            {
                steps++;
                calc(currrow, currcol - 1);
                steps--;
            }
            break;
        case 3:
            if (currcol < 6 && !visited[currrow][currcol + 1])
            {
                steps++;
                calc(currrow, currcol + 1);
                steps--;
            }
            break;
        }
    }
    else
    {
        if (currrow > 0 && !visited[currrow - 1][currcol])
        {
            steps++;
            calc(currrow - 1, currcol);
            steps--;
        }
        if (currrow < 6 && !visited[currrow + 1][currcol])
        {
            steps++;
            calc(currrow + 1, currcol);
            steps--;
        }
        if (currcol > 0 && !visited[currrow][currcol - 1])
        {
            steps++;
            calc(currrow, currcol - 1);
            steps--;
        }
        if (currcol < 6 && !visited[currrow][currcol + 1])
        {
            steps++;
            calc(currrow, currcol + 1);
            steps--;
        }
    }
    visited[currrow][currcol] = false;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;

    fill(reserved, reserved + 49, -1); // Initialize reserved array to -1

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '?':
            reserved[i] = -1;
            break;
        case 'U':
            reserved[i] = 0;
            break;
        case 'D':
            reserved[i] = 1;
            break;
        case 'L':
            reserved[i] = 2;
            break;
        case 'R':
            reserved[i] = 3;
            break;
        }
    }

    calc(0, 0);
    cout << ans << endl;
}
