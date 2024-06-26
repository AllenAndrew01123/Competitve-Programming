#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,i=0,s1=0,s2=0,s3=0;
    cin>>n;
    int a[n];
    while(cin>>a[i])
    {
        if(a[i]==1)
        s1++;
        if(a[i]==2)
        s2++;
        if(a[i]==3)
        s3++;
        i++;

    }
    int mi=min(min(s1,s2),s3);
    cout<<mi<<endl;
    int j=1;
    for(;j<=mi;j++)
    {
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout<<i+1<<" ";
            a[i]=-1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            cout<<i+1<<" ";
            a[i]=-1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==3)
        {
            cout<<i+1<<" "<<endl;
            a[i]=-1;
            break;
        }
    }
    }

}