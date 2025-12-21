#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,d=0;
    cin>>n;
    int arr[n];
    int i=0;
    while(cin>>arr[i])i++;
    i=0;
    int lp=0,rp=n-1;
    while(lp<=rp)
    {
        if(arr[lp]<=arr[rp])
        {
            if(i%2==0)
            s+=arr[rp];
            else
            d+=arr[rp];
            rp--;
        }
        else
        {
           if(i%2==0)
            s+=arr[lp];
            else
            d+=arr[lp];
            lp++; 
        }
        i++;
    }
       
    cout<<s<<" "<<d;

}