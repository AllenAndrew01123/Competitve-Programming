#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[10][10];
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            char c;cin>>c;
            if(c-48==1)
            a[i][j]=2;
            else
            a[i][j]=c-48;
        }
    }
    // a[1][1]=a[2][2];
    // a[4][2]=a[5][2];
    // a[7][3]=a[8][2];
    // a[2][4]=a[2][5];
    // a[5][4]=a[5][5];
    // a[8][6]=a[8][5];
    // a[3][7]=a[2][8];
    // a[6][8]=a[5][8];
    // a[9][9]=a[8][8];
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}