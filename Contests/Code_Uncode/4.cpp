#include<bits/stdc++.h>

#define SIZE 2e5+5

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<ll,int> plli;
typedef tuple<int,int,char> tiic;
typedef vector<vector<long long>> vvl;

const int INF = 1e9+10;
const ll LINF = 1e18;
const int MOD = 1e9+7;

vector<ll> BIT(SIZE,0);

void insert(int i,ll val){
    for(int k=i;k<SIZE;k+=(k&-k)){
        BIT[k] += val;
    }    
}

ll query(int i){
    ll ans = 0;
    for(int k=i;k>0;k-=(k&-k)){
        ans += BIT[k];
    }
    return ans;
}

void update(int i,ll val){
    for(int k=i;k<SIZE;k+=(k&-k)){
        BIT[k] += val;
    }
}

struct Matrix{
    vector<vector<ll>> mat;
    Matrix(int n,int m){
        mat.resize(n);
        for(int i=0;i<n;i++)
            mat[i].resize(m,0);
    }

    Matrix operator *(const Matrix &other){
        Matrix product(mat.size(),other.mat[0].size());
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<other.mat[0].size();j++){
                for(int k=0;k<mat[0].size();k++){
                    product.mat[i][j] += mat[i][k]*other.mat[k][j];
                    product.mat[i][j] %= MOD;
                }
            }
        }
        return product;
    }
};

Matrix matrixExp(Matrix &a,int n){
    Matrix result(a.mat.size(),a.mat[0].size());
    for(int i=0;i<a.mat.size();i++)
        result.mat[i][i] = 1;
    while(n){
        if(n&1){
            result = result*a;
        }
        n >>= 1;
        a = (a*a);
    }
    return result;
}

ll binaryExp(ll a,ll b){
    ll result = 1;
    while(b){
        if(b&1)
            result = (result*1LL*a)%MOD;
        a = (a*1LL*a)%MOD;
        b >>= 1;
    }
    return result;
}

const int mxN=2e5+5;
int t,n;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cin >> t;
    while(t--){
        cin >> n;
        int arr[mxN];
        map<int,int> mp;
        int maxi=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(mp.find(arr[i])==mp.end())
                mp[arr[i]]=1;
            else
                mp[arr[i]]++;
            maxi = max(maxi,arr[i]);
        }
        int f=0;
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>2 || mp[maxi]>1){
                f=1;
                break;                
            }
        }
        if(f){
            cout << 0 << "\n";
            continue;
        }
        ll ans = binaryExp(2,(n-1)%(MOD-1));  
        ll inv = binaryExp(2,MOD-2);
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==2){
                ans=(ans*inv)%MOD;
            } 
        }      
        cout << ans << "\n";
    }
}