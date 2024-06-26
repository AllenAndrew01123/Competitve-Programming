#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;
    int a[n];
    int b[n];
    int i=0,c=0;
    while(i<n)
    {
        cin>>a[i];
        if(a[i]==0)
        b[i]=1;
        else
        {b[i]=-1;c++;}
        i++;
    }
    int currsum=0,maxsum=INT_MIN;
    for(int j=0;j<n;j++)
    {
        currsum+=b[j];
        currsum=max(currsum,0);
        maxsum=max(currsum,maxsum);
        // cout<<currsum<<" "<<maxsum<<endl;
    }
    if(c==n)
    cout<<c-1<<endl;
    else
    cout<<c+maxsum;

}