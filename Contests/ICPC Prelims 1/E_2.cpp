#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353

// Function to perform modular exponentiation
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

// Function to solve the problem for each test case
vector<long long> solve(int t, vector<long long>& test_cases) {
    vector<long long> results;
    for (long long n : test_cases) {
        long long result = 0;
        long long power_of_two = 1;  // 2^length mod MOD
        long long length = 1;
        long long start = 1;

        while (start <= n) {
            // Determine the range of numbers with the same binary length
            long long end = min((1LL << length) - 1, n);
            long long count = end - start + 1;

            // Compute the contribution of this group
            power_of_two = mod_exp(2, length, MOD);
            long long group_contribution = count * (start + end) / 2 % MOD;

            // Update result with current group's contribution
            result = (result * power_of_two + group_contribution) % MOD;

            // Move to the next group
            start = end + 1;
            length++;
        }

        results.push_back(result);
    }
    return results;
}

int main() {
    int t;
    cin >> t;
    vector<long long> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }

    // Solve for each test case
    vector<long long> answers = solve(t, test_cases);

    // Output the results
    for (long long ans : answers) {
        cout << ans << endl;
    }

    return 0;
}
