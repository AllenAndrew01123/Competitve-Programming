#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x1,x2,x3;
    cin>>x1>>x2>>x3;cout<<max(max(x1,x2),x3)-min(min(x1,x2),x3);

}