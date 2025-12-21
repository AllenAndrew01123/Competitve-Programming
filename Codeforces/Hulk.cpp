#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i=1;
    cin>>n;
    int temp=n;
    while(n!=1)
    {
        if(i%2!=0)
        cout<<"I hate that ";
        else 
        cout<<"I love that ";
        i++;
        n--;
    }
    if(temp%2==0)
    cout<<"I love it ";
    else
    cout<<"I hate it ";
}