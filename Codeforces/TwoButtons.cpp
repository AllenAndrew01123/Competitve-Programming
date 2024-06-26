#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    if(n>=m)
    {
        cout<<n-m;
    }
    else
    {
        int cnt=0;
        while(n!=m && n<m)
        {
            cnt++;
            if(m&1)
            m++;
            else
            m/=2;
        }
        cout<<cnt+ n-m<<endl;
    }
}