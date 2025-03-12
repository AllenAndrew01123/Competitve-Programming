#include <iostream>
#include <vector>
using namespace std;

// Function to compute the maximum number of small indices
int countSmallIndices(int N, const vector<int>& A, const vector<int>& B) {
    vector<int> C(N + 1, 0); // Placeholder for the chosen array C
    int smallIndexCount = 0;

    // Initialize C[1] and C[2] to the smallest possible values for simplicity
    C[1] = min(A[0], B[0]);
    C[2] = min(A[1], B[1]);

    // Iterate through the indices from 3 to N
    for (int i = 3; i <= N; i++) {
        // Try both A[i-1] and B[i-1] and count small indices
        int maxSmallIndices = 0;
        for (int pick = 0; pick < 2; pick++) {
            C[i] = (pick == 0) ? A[i - 1] : B[i - 1];
            int currentSmallIndices = 0;

            // Check for the condition with all pairs (j, k) where 1 <= j < k < i
            for (int j = 1; j < i; j++) {
                for (int k = j + 1; k < i; k++) {
                    if (C[i] <= C[j] + C[k]) {
                        currentSmallIndices++;
                        break; // No need to check further once condition is met
                    }
                }
            }

            // Update the maximum possible small indices for this i
            maxSmallIndices = max(maxSmallIndices, currentSmallIndices);
        }

        // Add the best choice for index i
        smallIndexCount += maxSmallIndices;
    }

    return smallIndexCount;
}

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        cin >> N; // Size of arrays
        vector<int> A(N), B(N);

        // Input array A
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Input array B
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        // Calculate the result
        cout << countSmallIndices(N, A, B) << endl;
    }

    return 0;
}
