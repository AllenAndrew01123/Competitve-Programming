#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[4];
    int i=0,count=0;
    while(cin>>a[i]) i++;
    sort(a,a+4);
    int j=0;
    while(j<=2)
    {
        if(a[j]==a[j+1])
        {
            count++;
        }
        j++;
    }
    cout<<count;

}
