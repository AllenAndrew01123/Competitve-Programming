#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a[5];
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    string s;
    cin>>s;
    int i=0,cal=0;
    while(i<s.length())
    {
        if(s[i]=='1')
        cal+=a[1];
        if(s[i]=='2')
        cal+=a[2];
        if(s[i]=='3')
        cal+=a[3];
        if(s[i]=='4')
        cal+=a[4];
        i++;
    }
    cout<<cal;
}