#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int open = 0, close = 0;

        // Count number of '(' and ')'
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }

        // Maximum length of regular subsequence
        int max_len = min(open, close) * 2;

        // t should not be equal to s → remove at least one pair
        if (max_len == n) max_len -= 2;

        if (max_len <= 0) cout << -1 << "\n";
        else cout << max_len << "\n";
    }

    return 0;
}