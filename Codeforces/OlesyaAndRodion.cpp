#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    int t;
    cin>>n>>t;
    if(t==10 && n==1)
    cout<<-1;
    else if(t==10 && n>1)
    {
        cout<<"10";
        n-=2;
        while(n>0)
       { cout<<0;n--;}
    }
    else
    {
        while(n--)
        cout<<t;
    }

}