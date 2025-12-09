#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x;
    cout << "? 2 2" << endl;
    cin >> x;
    if (x)
    {
        ll y;
        cout << "? 2 1" << endl;
        cin >> y;
        if (y)
        {
            ll z;
            cout << "? 1 1" << endl;
            cin >> z;
            if (z)
                cout << "! 1 1" << endl;
            else
                cout << "! 2 1" << endl;
            return;
        }
        ll z;
        cout << "? 1 2" << endl;
        cin >> z;
        if (z)
            cout << "! 1 2" << endl;
        else
            cout << "! 2 2" << endl;
        return;
    }
    cout << "? 2 4" << endl;
    cin >> x;
    if (x)
    {
        ll y;
        cout << "? 2 3" << endl;
        cin >> y;
        if (y)
        {
            ll z;
            cout << "? 1 3" << endl;
            cin >> z;
            if (z)
                cout << "! 1 3" << endl;
            else
                cout << "! 2 3" << endl;
            return;
        }
        ll z;
        cout << "? 1 4" << endl;
        cin >> z;
        if (z)
            cout << "! 1 4" << endl;
        else
            cout << "! 2 4" << endl;
        return;
    }
    cout << "? 4 2" << endl;
    cin >> x;
    if (x)
    {
        ll y;
        cout << "? 4 1" << endl;
        cin >> y;
        if (y)
        {
            ll z;
            cout << "? 3 1" << endl;
            cin >> z;
            if (z)
                cout << "! 3 1" << endl;
            else
                cout << "! 4 1" << endl;
            return;
        }
        ll z;
        cout << "? 3 2" << endl;
        cin >> z;
        if (z)
            cout << "! 3 2" << endl;
        else
            cout << "! 4 2" << endl;
        return;
    }
    ll y;
    cout << "? 4 3" << endl;
    cin >> y;
    if (y)
    {
        ll z;
        cout << "? 3 3" << endl;
        cin >> z;
        if (z)
            cout << "! 3 3" << endl;
        else
            cout << "! 4 3" << endl;
        return;
    }
    ll z;
    cout << "? 3 4" << endl;
    cin >> z;
    if (z)
        cout << "! 3 4" << endl;
    else
        cout << "! 4 4" << endl;
    return;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}