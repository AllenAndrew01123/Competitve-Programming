#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

struct RollingHash {
    vector<long long> h1, h2, p1, p2;
    int n;
    long long base, mod1, mod2;
    
    RollingHash(const vector<int>& arr) {
        n = arr.size();
        base = 137;
        mod1 = 1000000007;
        mod2 = 1000000009;
        h1.resize(n + 1, 0);
        h2.resize(n + 1, 0);
        p1.resize(n + 1, 0);
        p2.resize(n + 1, 0);
        p1[0] = 1;
        p2[0] = 1;
        for (int i = 0; i < n; i++) {
            long long val = arr[i] + 1;
            h1[i + 1] = (h1[i] * base + val) % mod1;
            h2[i + 1] = (h2[i] * base + val) % mod2;
            p1[i + 1] = (p1[i] * base) % mod1;
            p2[i + 1] = (p2[i] * base) % mod2;
        }
    }
    
    pair<long long, long long> getHash(int l, int r) const {
        long long res1 = (h1[r] - h1[l] * p1[r - l]) % mod1;
        if (res1 < 0) res1 += mod1;
        long long res2 = (h2[r] - h2[l] * p2[r - l]) % mod2;
        if (res2 < 0) res2 += mod2;
        return {res1, res2};
    }
};

int lcp(const RollingHash &rh1, const vector<int>& arr1, int l1,
        const RollingHash &rh2, const vector<int>& arr2, int l2, int len) {
    int lo = 0, hi = len;
    while (lo < hi) {
        int mid = (lo + hi + 1) / 2;
        if (rh1.getHash(l1, l1 + mid) == rh2.getHash(l2, l2 + mid))
            lo = mid;
        else
            hi = mid - 1;
    }
    return lo;
}

int compareSubarray(const RollingHash &rh1, const vector<int>& arr1, int l1, int r1,
                    const RollingHash &rh2, const vector<int>& arr2, int l2, int r2) {
    int len1 = r1 - l1, len2 = r2 - l2;
    int common = lcp(rh1, arr1, l1, rh2, arr2, l2, min(len1, len2));
    if (common < min(len1, len2)) {
        if (arr1[l1 + common] < arr2[l2 + common])
            return -1;
        else if (arr1[l1 + common] > arr2[l2 + common])
            return 1;
        else
            return 0;
    }
    return (len1 < len2) ? -1 : (len1 > len2) ? 1 : 0;
}

vector<int> booth(const vector<int>& arr) {
    int n = arr.size(), i = 0, j = 1, k = 0;
    while (i < n && j < n && k < n) {
        int a = arr[(i + k) % n], b = arr[(j + k) % n];
        if (a == b) {
            k++;
            continue;
        }
        if (a > b) {
            i = i + k + 1;
            if (i <= j)
                i = j + 1;
        } else {
            j = j + k + 1;
            if (j <= i)
                j = i + 1;
        }
        k = 0;
    }
    int start = min(i, j);
    vector<int> res(n);
    for (int t = 0; t < n; t++)
        res[t] = arr[(start + t) % n];
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];
            
        vector<int> P = booth(B);
        RollingHash rhP(P), rhA(A);
        vector<int> X(n, 0);
        
        int i = 0, forced_start = -1, forced_end = -1;
        while (i < n) {
            if (i > forced_end) {
                if (i <= n - m) {
                    int cmp = compareSubarray(rhA, A, i, i + m, rhP, P, 0, m);
                    if (cmp > 0) {
                        forced_start = i;
                        forced_end = i + m - 1;
                        if (forced_end >= n)
                            forced_end = n - 1;
                        X[i] = P[0];
                        i++;
                        continue;
                    } else {
                        X[i] = A[i];
                        i++;
                    }
                } else {
                    X[i] = A[i];
                    i++;
                }
            } else {
                int L_remaining = forced_end - i + 1;
                if (i <= n - m) {
                    int cmpForced = compareSubarray(rhP, P, 0, L_remaining,
                                                    rhP, P, i - forced_start, i - forced_start + L_remaining);
                    if (cmpForced < 0) {
                        forced_start = i;
                        forced_end = i + m - 1;
                        if (forced_end >= n)
                            forced_end = n - 1;
                        X[i] = P[0];
                        i++;
                        continue;
                    }
                }
                X[i] = P[i - forced_start];
                i++;
            }
        }
        for (int j = 0; j < n; j++)
            cout << X[j] << (j == n - 1 ? "\n" : " ");
    }
    return 0;
}
