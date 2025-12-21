#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

// Function to compute modular exponentiation
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute the modular inverse using Fermat's Little Theorem
long long mod_inverse(long long a, long long mod) {
    return mod_exp(a, mod - 2, mod);
}

void solve() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        long long W, G, L;
        cin >> W >> G >> L; // Input values for each test case
        
        long long result = 0;
        
        // Case 1: If W > L, you're guaranteed to lose weight every day until W == L.
        if (W > L) {
            result += (W - L); // You lose 1 unit of weight per day, so it takes (W - L) days to reach L.
            W = L; // After this, your weight is now L.
        }
        
        // Case 2: Now we are at W == L and below, where the probability alternates between gain and loss.
        // We need to calculate the expected number of days to reach G from L.
        if (W > G) {
            long long days = W - G;
            // We calculate the expected value: (W - G) * modular inverse of 1/2 mod 998244353
            long long inv2 = mod_inverse(2, MOD); // Inverse of 2 mod 998244353
            result = (result + days * inv2) % MOD;
        }
        
        // Output the result for the current test case
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
