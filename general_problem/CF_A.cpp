#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        s = ' ' + s; // 1-based indexing
        
        // Count leading 1s (prefix length of 1s)
        int prefix_ones = 0;
        while (prefix_ones + 1 <= n && s[prefix_ones + 1] == '1') {
            prefix_ones++;
        }
        
        // Always choose the full string [1, n] as one substring
        cout << 1 << " " << n << " ";
        
        if (prefix_ones == n) {
            // All 1s: choose [1,1] as the other
            cout << 1 << " " << 1 << '\n';
        } else {
            // Find the length of the first run of 0s after the leading 1s
            int run_zeros = 0;
            for (int i = prefix_ones + 1; i <= n; i++) {
                if (s[i] == '0') run_zeros++;
                else break;
            }
            
            if (run_zeros >= prefix_ones) {
                // Flip as many leading 1s as possible without harming higher bits
                cout << 1 << " " << n - prefix_ones << '\n';
            } else {
                // Optimal: flip the entire run of 0s and some leading 1s
                cout << prefix_ones - run_zeros + 1 << " " << n - run_zeros << '\n';
            }
        }
    }
    return 0;
}