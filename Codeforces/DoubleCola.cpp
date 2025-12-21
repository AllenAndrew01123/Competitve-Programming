#include<bits/stdc++.h>
using namespace std;
string a[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long n;cin>>n;
    int i=1;
    while(5*(pow(2,i)-1)<n)
    i++;
    n-=5*(pow(2,i-1)-1)+1;
    // cout<<n<<" "<<i<<endl;
    i=pow(2,i-1);
    if(n/i==0)
    cout<<a[0];
    else if(n/i==1)
    cout<<a[1];
    else if(n/i==2)
    cout<<a[2];
    else if(n/i==3)
    cout<<a[3];
    else
    cout<<a[4];
}