#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
         int n;cin>>n;
         int a[2*n][2*n];
         int i,j;
         for(i=0;i<2*n;i=i+2)
         {
            if(i%4==0)
            {
            for(j=0;j<2*n;j=j+2)
            {
                if(j%4==0)
                cout<<"##";
                else
                cout<<"..";
            }
            cout<<endl;
            for(j=0;j<2*n;j=j+2)
            {
                if(j%4==0)
                cout<<"##";
                else
                cout<<"..";
            }
            }
            else
            {
                for(j=0;j<2*n;j=j+2)
                 {
                if(j%4==0)
                cout<<"..";
                else
                cout<<"##";
                 }
                  cout<<endl;
                 for(j=0;j<2*n;j=j+2)
                 {
                if(j%4==0)
                cout<<"..";
                else
                cout<<"##";
                 } 
            }
            cout<<endl;
         }
        //  cout<<endl;

    }


}