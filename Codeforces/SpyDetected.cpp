#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int i = 0;
        for(;i<n;i++)
        cin>>a[i];
        if (a[0]==a[1])
        {
            for (i = 2; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            if (a[0] == a[2])
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
    }
}