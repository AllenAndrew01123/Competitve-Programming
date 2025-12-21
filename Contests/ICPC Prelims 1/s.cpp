#include <iostream>
#include <string>
using namespace std;

// Function to query the interactor
int query(int l, int r) {
    cout << "? " << l << " " << r << endl;
    cout.flush();
    int response;
    cin >> response;
    return response;
}

// Function to solve a single test case
void solveTestCase() {
    int n;
    cin >> n;

    string ans;  // Stores the reconstructed binary string
    int prev = 0; // Previous value of f(1, i)
    int zeroCount = 0; // Count of '0's in the string so far

    for (int i = 1; i < n; i++) {
        int current = query(1, i + 1);

        if (prev == 0) {
            // Handle the first non-zero query
            if (current == 0) continue; // No subsequences yet

            if (current > i) {
                cout << "! IMPOSSIBLE" << endl;
                return;
            }

            // Fill the string based on the difference
            ans.append(i - current, '1'); // Add 1's
            ans.append(current, '0');    // Add 0's
            zeroCount = current;
        } else {
            // Determine the next character
            if (current > prev) {
                if (current - prev == zeroCount) {
                    ans.push_back('1'); // Add a '1'
                } else {
                    cout << "! IMPOSSIBLE" << endl;
                    return;
                }
            } else if (current == prev) {
                ans.push_back('0'); // Add a '0'
                zeroCount++;
            } else {
                cout << "! IMPOSSIBLE" << endl;
                return;
            }
        }
        prev = current; // Update previous value
    }

    // Final validation
    if (ans.size() == n) {
        cout << "! " << ans << endl;
    } else {
        cout << "! IMPOSSIBLE" << endl;
    }
}

// Driver function
int main() {
    int t;
    cin >> t;

    while (t--) {
        solveTestCase();
    }

    return 0;
}