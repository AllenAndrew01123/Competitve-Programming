#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        int a[n+1][n+1];
        int i,j,x=1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((i+j)%2==0)
                {
                    a[i][j]=x;
                    x++;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((i+j)%2!=0)
                {
                    a[i][j]=x;
                    x++;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        solve(n);
    }

}