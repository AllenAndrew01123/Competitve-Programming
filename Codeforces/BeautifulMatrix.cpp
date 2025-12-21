#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int x,y;
    int a[5][5];
    F(i,0,5)
    {
        F(j,0,5)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }

    }
    cout<<abs(x-2)+abs(y-2);
    return 0;
}

