#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int n,k;
    cin >> n >> k;
    a[0]=1;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    sort(a, a + n + 1);
    cout << (a[k] != a[k + 1] ? a[k] : -1);
}