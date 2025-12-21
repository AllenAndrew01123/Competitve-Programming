#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n],b[n];
        F(i,0,n)
        cin>>a[i];
        F(i,0,n)
        cin>>b[i];
        sort(a,a+n,greater<int>());
        sort(b,b+n,greater<int>());
        int i=n-1;
        int j=0;
        while(k--)
        {
            if(b[j]>a[i])
            {
                swap(b[j],a[i]);
                i--;
                j++;
            }
            else
            break;
        }
        cout<<accumulate(a,a+n,0)<<endl;



    }
}