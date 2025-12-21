#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,l,c,d,p,nl,np;cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min(min(k*l/nl,c*d),p/np)/n;
}