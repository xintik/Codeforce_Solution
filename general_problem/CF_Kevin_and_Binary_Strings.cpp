#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    s = ' ' + s; // 1-based

    int prefix_ones = 0;
    while (prefix_ones + 1 <= n && s[prefix_ones + 1] == '1') {
        prefix_ones++;
    }

    cout << 1 << " " << n << " ";

    if (prefix_ones == n) {
        cout << 1 << " " << 1 << "\n";
    } else {
        int run_zeros = 0;
        for (int i = prefix_ones + 1; i <= n; i++) {
            if (s[i] == '0') run_zeros++;
            else break;
        }

        if (run_zeros >= prefix_ones) {
            cout << 1 << " " << n - prefix_ones << "\n";
        } else {
            cout << prefix_ones - run_zeros + 1 << " " << n - run_zeros << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}