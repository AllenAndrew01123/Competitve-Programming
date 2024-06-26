#include<bits/stdc++.h>
using namespace std;

int cnt(int l,int r){
    cout<<"? "<<l<<' '<<r<<'\n';
    int s;
    cin>>s;
    return r-l+1-s;
}
int main() {
    int n,t,k;
    cin>>n>>t>>k;
    int l=1,r=n,m,ans=-1;
    while(l<=r){
        m=l+(r-l)/2;
        
        if(l==r){
            cout<<"! "<<m<<'\n';
            break;
        }
        int q=cnt(l,m);
        if(q>=k){
            r=m;
        }
        else{
            l=m+1;
            k-=q;
        }
    }
    return 0;
} 