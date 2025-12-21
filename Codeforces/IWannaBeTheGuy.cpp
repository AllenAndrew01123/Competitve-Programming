#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    set <int> list;
    int p;
    cin>>p;
    while(p--)
    {
        int m;
        cin>>m;
        list.insert(m);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int m;
        cin>>m;
        list.insert(m);
    }
    if(list.size()==n)
    cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}