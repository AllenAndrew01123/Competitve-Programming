#include <bits/stdc++.h>
using namespace std;
int arr[] = {2, 3, 5, 7};
int main()
{
    int n;
    cin >> n;
    vector<int> p;
    while (n--)
    {
        char c;
        cin >> c;
        int digit = c - 48;
        if (digit == 0 || digit == 1)
            continue;
        else
        {
            if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
                p.push_back(digit);
            else if (digit == 4)
            {
                p.push_back(2);
                p.push_back(2);
                p.push_back(3);
            }
            else if (digit == 6)
            {
                p.push_back(3);
                p.push_back(5);
            }
            else if (digit == 8)
            {
                p.push_back(2);
                p.push_back(2);
                p.push_back(2);
                p.push_back(7);
            }
            else
            {
                p.push_back(2);
                p.push_back(3);
                p.push_back(3);
                p.push_back(7);
            }
        }
    }
    sort(p.begin(), p.end(), greater<int>());
    for (int i = 0; i < p.size(); i++)
        cout << p[i];
}