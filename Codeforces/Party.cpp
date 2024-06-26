#include <bits/stdc++.h>
using namespace std;
int a[3000];
int depth[3000];
int finddepth(int i,int count)
{
    if(a[i]!=-1)
    return finddepth(a[i],++count);
    else
    return count;
}
signed main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == -1)
            depth[i] = 0;
        else
            depth[i] = finddepth(i,0);
    }
    cout<<*max_element(depth+1,depth+n+1)+1;

}