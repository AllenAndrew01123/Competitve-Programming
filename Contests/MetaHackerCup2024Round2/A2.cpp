#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool isValidMountain(long long num, long long A, long long B, long long M) {
    string s=to_string(num);
    if((s[s.length()/2]>s[s.length()/2-1])&&(s[s.length()/2]>s[s.length()/2+1]))
    return num >= A && num <= B && num % M == 0;
    return false;
}
void generateMountainNumbers(vector<long long>& mountains, long long currentNum, int position, int length, int middle, int previousDigit, bool increasing, int digits[], long long A, long long B, long long M) {
    if (position == length) {
        if (isValidMountain(currentNum, A, B, M)) {
            mountains.push_back(currentNum);
        }
        return;
    }

    int startDigit = (position == 0) ? 1 : 1;

    if (increasing) {
        for (int d = startDigit; d <= 9; ++d) {
            if (position == 0 || d >= previousDigit) {
                digits[position] = d;
                if (position == middle) {
                    generateMountainNumbers(mountains, currentNum * 10 + d, position + 1, length, middle, d, false, digits, A, B, M);
                } else {
                    generateMountainNumbers(mountains, currentNum * 10 + d, position + 1, length, middle, d, true, digits, A, B, M);
                }
            }
        }
    } else {
        for (int d = 1; d <= digits[middle]; ++d) {
            if (d <= previousDigit) {
                digits[position] = d;
                generateMountainNumbers(mountains, currentNum * 10 + d, position + 1, length, middle, d, false, digits, A, B, M);
            }
        }
    }
}
long long countMountainNumbers(long long A, long long B, long long M) {
    vector<long long> mountains;
    for (int length = 1; length <= to_string(B).length(); length += 2) {
        int middle = length / 2;
        int digits[20] = {0};
        generateMountainNumbers(mountains, 0, 0, length, middle, 0, true, digits, A, B, M);
    }
    return mountains.size();
}
void solve()
{
  ll a,b,m;cin>>a>>b>>m;
  ll cnt = countMountainNumbers(a, b, m);
  cout<<cnt;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    // freopen("cottontail_climb_part_2_input.txt", "r", stdin);
    // freopen("file_name.out", "w", stdout);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
}