#include<bits/stdc++.h>
using namespace std;
// #define F(i,a,b) for(int i=a;i<b;i++)
int a[]={10,11,100,101,110,111,1000,1001,1010,1100,1011,1101,1110,1111,10000,10001,10010,10100,10011,10101,10110,10111,11000,11001,11010,11100,11011,11101,11110,11111};
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
       int i,c=0;
       for(i=29;i>=0;)
       {
        if(n%a[i]==0)
        {
            c++;
            n/=a[i];
        }
        else
        i--;
       }
       if(n==1)
       cout<<"YES\n";
       else
       cout<<"NO\n";

    }

}