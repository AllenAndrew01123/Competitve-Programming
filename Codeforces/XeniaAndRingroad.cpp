#include<bits/stdc++.h>
using namespace std;
int i;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long n;
    int m;cin>>n>>m;
    int a[m];
    long long c=0;
    while(cin>>a[i])i++;
    int j;
    for(j=0;j<m-1;j++)
    {
        if(a[j]>a[j+1])
        c++;
    }
    cout<<c*n+a[m-1]-1;
}