#include<bits/stdc++.h>
using namespace std;

vector<long long> generate_peaks() {
    vector<long long> peaks;
    
    for (int k = 0; k <= 9; ++k) {
        for (int start_digit = 1; start_digit <= 9; ++start_digit) {
            vector<int> digits;
            
            for (int i = 0; i <= k; ++i) {
                digits.push_back(start_digit + i);
            }
            
            for (int i = k-1; i >= 0; --i) {
                digits.push_back(start_digit + i);
            }
            
            long long peak_num = 0;
            for (int d : digits) {
                peak_num = peak_num * 10 + d;
            }
            
            peaks.push_back(peak_num);
        }
    }
    
    return peaks;
}

int count_peaks_in_range(long long A, long long B, long long M, const vector<long long>& peaks) {
    int count = 0;
    
    for (long long peak : peaks) {
        if (peak >= A && peak <= B && peak % M == 0) {
            ++count;
        }
    }
    
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ifstream input("cottontail_climb_part_1_input.txt");
    // ofstream output("output.txt");

    // if (!input || !output) {
    //     cerr << "Error opening file!" << endl;
    //     return 1;
    // }

    int T;
    cin>> T;

    vector<long long> peaks = generate_peaks();
    sort(peaks.begin(), peaks.end());
    for(auto x:peaks)
    cout<<x<<endl;
    for (int t = 1; t <= T; ++t) {
        long long A, B, M;
        cin>> A >> B >> M;
        
        int result = count_peaks_in_range(A, B, M, peaks);
        
        cout << "Case #" << t << ": " << result << endl;
    }
    
    
    return 0;
}
