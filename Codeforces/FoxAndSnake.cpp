#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int swap=m-1;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            arr[i][j]='#';
            else
            arr[i][j]='.';
        }
        if(i%2!=0){
        arr[i][swap]='#';
        if(swap==m-1)
        swap=0;
        else
        swap=m-1;
        }
    }
    F(i,0,n)
    {
        F(j,0,m)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}