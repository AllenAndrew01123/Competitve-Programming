#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
const int mxN=1e7+5;
int tt,n,m,k,q;
vector<int> p(mxN,1),primes;

void eos(){
    for(int i=2;i<mxN;i++){
        if(p[i]){
            primes.push_back(i);
            for(int j=2*i;j<mxN;j+=i)
                p[j]=0;  
        }      
    }
}


int solve(){
    cin >> n;
    int ans=0;
    map<int,int> mp;
    for(int i=0;i<primes.size() && primes[i]<=n;i++){
        int x = (primes[i]+1)/2;
        for(int j=0;primes[j]<=x && j<primes.size();j++){
            if(binary_search(primes.begin(),primes.end(),primes[i]-primes[j])){
                if(mp.find(primes[i]-primes[j])==mp.end()){
                     ans++;
                     mp[primes[i]-primes[j]]=1;
                }
                if(mp.find(primes[j])==mp.end()){
                    ans++;
                    mp[primes[j]]=1;
                }
            }
        }
    }
    return ans;
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    eos();
    cin >> tt;
    while(tt--){
        int ans = solve();
        cout << "Case #" << tt+1 << ": " << ans << "\n";
    }
    
}